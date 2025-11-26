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

*Menu
<img width="406" height="181" alt="Screenshot 2025-11-20 211802" src="https://github.com/user-attachments/assets/e6e2a269-717b-411f-8342-6105b9bd2f97" />


*Add Vendor
<img width="501" height="291" alt="Screenshot 2025-11-20 212044" src="https://github.com/user-attachments/assets/9914ee9b-2c49-4c47-8a57-2c0597c5a3d4" />


*Display Vendors
<img width="596" height="254" alt="Screenshot 2025-11-20 213509" src="https://github.com/user-attachments/assets/fae84e34-c895-4dca-85d3-c4e2a73debb0" />


*Search Vendor
<img width="547" height="313" alt="Screenshot 2025-11-20 213544" src="https://github.com/user-attachments/assets/32b25d89-fb14-495c-82d6-fcad7d684b8a" />


*Update Vendor
<img width="500" height="311" alt="Screenshot 2025-11-20 213746" src="https://github.com/user-attachments/assets/ae437eaf-daeb-410b-9960-9213ea0e57ba" />


Delete Vendor
<img width="503" height="250" alt="Screenshot 2025-11-20 213826" src="https://github.com/user-attachments/assets/d386578d-656a-4a60-9c97-fa157d226bce" />


*Exit
<img width="399" height="172" alt="Screenshot 2025-11-20 213850" src="https://github.com/user-attachments/assets/b6a0b863-1fbf-48fa-9f87-8d17ec077feb" />


📝 Author

A.Hemanth kumar.
