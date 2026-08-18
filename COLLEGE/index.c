#include <stdio.h>
#include <stdlib.h>

#include <windows.h>
#include <sql.h>
#include <sqlext.h>


int main() {
    SQLHENV env;        // Environment handle
    SQLHDBC dbc;        // Connection handle
    SQLHSTMT stmt;      // Statement handle
    SQLRETURN ret;      // Return code

    SQLCHAR connStr[] = "Driver={SQL Server};Server=localhost;Database=company;Trusted_Connection=yes;";
    SQLCHAR query[] = "SELECT emp_id, name, dept, salary FROM EMP_PRO";

    SQLINTEGER emp_id;
    SQLCHAR name[50], dept[50];
    SQLFLOAT salary;

    // Allocate environment handle
    SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &env);
    SQLSetEnvAttr(env, SQL_ATTR_ODBC_VERSION, (void *) SQL_OV_ODBC3, 0);

    // Allocate connection handle
    SQLAllocHandle(SQL_HANDLE_DBC, env, &dbc);

    // Connect to SQL Server
    ret = SQLDriverConnect(dbc, NULL, connStr, SQL_NTS, NULL, 0, NULL, SQL_DRIVER_COMPLETE);
    if (SQL_SUCCEEDED(ret)) {
        printf("✅ Connected to SQL Server successfully.\n");
    } else {
        printf("❌ Connection failed.\n");
        goto cleanup;
    }

    // Allocate statement handle
    SQLAllocHandle(SQL_HANDLE_STMT, dbc, &stmt);

    // Execute the SQL query
    ret = SQLExecDirect(stmt, query, SQL_NTS);
    if (!SQL_SUCCEEDED(ret)) {
        printf("❌ Query execution failed.\n");
        goto cleanup;
    }

    // Bind the columns to variables
    SQLBindCol(stmt, 1, SQL_C_SLONG, &emp_id, 0, NULL);
    SQLBindCol(stmt, 2, SQL_C_CHAR, name, sizeof(name), NULL);
    SQLBindCol(stmt, 3, SQL_C_CHAR, dept, sizeof(dept), NULL);
    SQLBindCol(stmt, 4, SQL_C_DOUBLE, &salary, 0, NULL);

    // Print results
    printf("\n%-10s %-20s %-15s %-10s\n", "EMP_ID", "NAME", "DEPT", "SALARY");
    printf("--------------------------------------------------------------\n");

    while (SQLFetch(stmt) == SQL_SUCCESS) {
        printf("%-10d %-20s %-15s %-10.2f\n", emp_id, name, dept, salary);
    }

cleanup:
    // Clean up ODBC handles
    SQLFreeHandle(SQL_HANDLE_STMT, stmt);
    SQLDisconnect(dbc);
    SQLFreeHandle(SQL_HANDLE_DBC, dbc);
    SQLFreeHandle(SQL_HANDLE_ENV, env);

    printf("\nProgram finished.\n");
    return 0;
}
