VENDOR MANAGEMENT SYSTEM
ABSTRACT

The Vendor Management System is a simple console-based application developed in the C programming language. The main objective of this project is to maintain vendor information efficiently by performing essential operations such as adding vendors, displaying vendor details, and updating vendor contact information.

This program utilizes structures and arrays to store vendor information including Vendor ID, Name, Contact Number, and Company Name. It supports a maximum of 10 vendor entries and offers a menu-driven interface for easy interaction.

The project demonstrates fundamental C programming concepts such as structures, arrays, loops, conditional statements, and functions. It serves as a practical introductory project for beginners learning to develop console-based applications in the C language.

FUNCTIONAL REQUIREMENTS
1. Add Vendor

Allows the user to add a new vendor.

Inputs Required:

Vendor ID

Vendor Name

Contact Number

Company Name

The vendor is stored in the vendor array if storage capacity has not been reached.

2. Display All Vendors

Displays a complete list of all vendors stored in the system.

Displays:

Vendor ID

Name

Contact Number

Company Name

3. Update Vendor Contact

Enables the user to update the contact number of an existing vendor.

Process:

User enters an existing Vendor ID.

Program searches for the vendor in the database.

If found:

Prompts the user for a new contact number.

Updates the vendor’s contact information.

If not found:

Displays: “Vendor not found.”

4. Exit Program

Closes the application safely and terminates execution.

PROJECT FEATURES
Structured Data Storage

Uses

struct vendor


to store:

Vendor ID

Vendor Name

Contact Number

Company Name

Fixed Vendor List Size

Supports up to 10 vendors.

Configurable using:

#define MAX_VENDORS 10

Menu-Driven Interface

User-friendly menu with numbered options for selecting required operations.

Input Validation

Displays proper messages for:

Vendor list full

No vendors available

Invalid Vendor ID

Modular Programming

Uses separate functions:

addVendor()

displayVendors()

updateVendorContact()

This design makes the program easy to understand and maintain.

SIMULATED CONSOLE OUTPUT (TEXT-BASED SCREENSHOTS)
Screenshot 1: Main Menu
========== Vendor Management System ==========
1. Add Vendor
2. Display All Vendors
3. Update Vendor Contact
4. Exit
Enter your choice: _

Screenshot 2: Adding a Vendor
Enter Vendor ID: 201
Enter Vendor Name: Raj Kumar
Enter Contact Number: 9876543210
Enter Company Name: Fresh Supplies Co.
Vendor added successfully!

Screenshot 3: Displaying Vendor List
ID    Name           Contact        Company
----------------------------------------------------
201   Raj Kumar      9876543210     Fresh Supplies Co.
202   Anita Rao      9123456780     Agro Traders Ltd.

Screenshot 4: Updating Vendor Contact
Enter Vendor ID to update: 201
Enter new contact number: 9988776655
Contact updated successfully!

Screenshot 5: Vendor Not Found
Enter Vendor ID to update: 999
Vendor not found.

Screenshot 6: Exit Program
Exiting program...
Thank you!
