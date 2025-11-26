🏢 VENDOR MANAGEMENT SYSTEM (C Programming)
📄 ABSTRACT

The Vendor Management System is a terminal-based application written in C that enables users to manage vendors for events efficiently.

It provides essential capabilities such as adding, viewing, searching, updating, and deleting vendor details.

All records are stored persistently in a binary file (vendor.txt) ensuring that the data remains saved across program runs.

This project illustrates key C programming concepts such as structures, file handling, control flow, loops, and modular design. It is suitable for beginners, coursework, and practical learning.

✨ FEATURES
Core Functionalities

➕ Add new vendor records (Vendor ID, Name, Service Type, Phone Number)
📋 Display all vendors in a formatted table
🔍 Search vendor by Vendor ID
✏️ Update vendor information
❌ Delete vendor records
💾 Persistent data storage using binary file (vendor.txt)
🖥️ Fully terminal-based, menu-driven interface
👨‍💻 Beginner-friendly modular code
⚙️ Auto-creates the data file if missing
⚠️ Includes basic input validation & error handling

🛠️ TECHNICAL REQUIREMENTS
System Requirements

Operating System: Windows / Linux / macOS

Terminal or Command Prompt

At least 4 MB RAM

Minimal disk space for vendor.txt

Software Requirements

C Compiler: GCC / MinGW / Clang / MSVC

Code Editor or IDE: VS Code, Code::Blocks, Dev-C++, etc.

Optional: Make utility (if using a Makefile)

Programming Requirements

Language: C

Standard Supported: C89 / C99 / C11

Header files required: stdio.h, stdlib.h, string.h

File Handling: Read/Write permissions in working directory

Records stored in binary format (vendor.txt)

File auto-created if not found

📌 FUNCTIONAL REQUIREMENTS
User Interface

Terminal-based CLI

Clean menu-driven navigation

Validates user input

Vendor Management Operations

➕ Add Vendor

Enter Vendor ID, Name, Service Type, Phone Number

Saved in vendor.txt

📋 Display Vendors

Shows all vendor records in a clean table format

🔍 Search Vendor

Search using unique Vendor ID

✏️ Update Vendor

Modify Name, Service Type, Phone Number, etc.

❌ Delete Vendor

Permanently removes a vendor record using a temporary file method

Data Management

Binary file storage → Fast and efficient

Safe updates and deletions

Handles empty/missing file gracefully

🔄 PROGRAM FLOW

Menu runs in a loop

Exit option included

Shows clear success/error messages appropriately

▶️ RUNNING THE PROGRAM
Compile
gcc vendor.c -o vendor

Run

Linux / macOS

./vendor


Windows

vendor.exe

Data File

Automatically creates vendor.txt

Stores all vendor data in binary form

📸 SCREENSHOTS (Optional)

Add Vendor

Display Vendors

Search Vendor

Update Vendor

Delete Vendor

Exit

📝 Author

J.Muni Bhargav Reddy
