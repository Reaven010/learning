#include <iostream>
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/prepared_statement.h>

using namespace std;
using namespace sql;

int main() {
    try {
        sql::mysql::MySQL_Driver *driver;
        sql::Connection *conn;
        sql::PreparedStatement *stmt;

        // Connect to MySQL
        driver = sql::mysql::get_mysql_driver_instance();
        conn = driver->connect("tcp://127.0.0.1:3306", "root", "yourpassword");
        conn->setSchema("dating_app");

        // Insert a new user
        stmt = conn->prepareStatement("INSERT INTO users (username, password_hash, age, gender, preference, location) VALUES (?, ?, ?, ?, ?, ?)");
        stmt->setString(1, "Alice");
        stmt->setString(2, "$2y$12$abcdef"); // Store hashed passwords
        stmt->setInt(3, 25);
        stmt->setString(4, "Female");
        stmt->setString(5, "Male");
        stmt->setString(6, "New York");

        stmt->executeUpdate();
        cout << "User added successfully!" << endl;

        // Clean up
        delete stmt;
        delete conn;
    } catch (sql::SQLException &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
