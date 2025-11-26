#include <stdio.h>
#include <string.h>

#define MAX_VENDORS 100   // Maximum number of vendors

// Vendor structure
typedef struct {
    int id;
    char name[50];       // Vendor name
    char service[50];    // Type of service
    char phone[20];      // Phone number
} Vendor;

// Global variables
Vendor vendors[MAX_VENDORS];
int vendorCount = 0;

// Helper function to remove trailing newline from fgets
void removeNewline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';
}

// Function declarations
void addVendor();
void listVendors();
void searchVendor();
void deleteVendor();

// Add a new vendor
void addVendor() {
    if (vendorCount >= MAX_VENDORS) {
        printf("Vendor list is full!\n");
        return;
    }

    Vendor v;

    printf("Enter Vendor ID: ");
    scanf("%d", &v.id);
    getchar(); // consume leftover newline

    // Check for duplicate ID
    for (int i = 0; i < vendorCount; i++) {
        if (vendors[i].id == v.id) {
            printf("Vendor ID already exists!\n");
            return;
        }
    }

    printf("Enter Vendor Name: ");
    fgets(v.name, sizeof(v.name), stdin);
    removeNewline(v.name);

    printf("Enter Service Type (Catering/Decor/Lighting/etc.): ");
    fgets(v.service, sizeof(v.service), stdin);
    removeNewline(v.service);

    printf("Enter Phone Number: ");
    fgets(v.phone, sizeof(v.phone), stdin);
    removeNewline(v.phone);

    vendors[vendorCount++] = v;
    printf("Vendor added successfully!\n");
}

// List all vendors
void listVendors() {
    if (vendorCount == 0) {
        printf("No vendors available.\n");
        return;
    }

    printf("\n--- Vendor List ---\n");
    for (int i = 0; i < vendorCount; i++) {
        printf("%d. ID: %d | Name: %s | Service: %s | Phone: %s\n",
               i + 1, vendors[i].id, vendors[i].name, vendors[i].service, vendors[i].phone);
    }
}

// Search for a vendor by ID
void searchVendor() {
    int id;
    printf("Enter Vendor ID to search: ");
    scanf("%d", &id);
    getchar(); // consume leftover newline

    for (int i = 0; i < vendorCount; i++) {
        if (vendors[i].id == id) {
            printf("Vendor Found:\n");
            printf("Name: %s\nService: %s\nPhone: %s\n",
                   vendors[i].name, vendors[i].service, vendors[i].phone);
            return;
        }
    }

    printf("Vendor not found.\n");
}

// Delete a vendor by ID
void deleteVendor() {
    int id;
    printf("Enter Vendor ID to delete: ");
    scanf("%d", &id);
    getchar(); // consume leftover newline

    for (int i = 0; i < vendorCount; i++) {
        if (vendors[i].id == id) {
            for (int j = i; j < vendorCount - 1; j++) {
                vendors[j] = vendors[j + 1];
            }
            vendorCount--;
            memset(&vendors[vendorCount], 0, sizeof(Vendor));
            printf("Vendor deleted successfully.\n");
            return;
        }
    }

    printf("Vendor not found.\n");
}

// Main program
int main() {
    int choice;

    while (1) {
        printf("\nVendor Management System\n");
        printf("1. Add Vendor\n");
        printf("2. List Vendors\n");
        printf("3. Search Vendor\n");
        printf("4. Delete Vendor\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // consume newline

        switch (choice) {
            case 1: addVendor(); break;
            case 2: listVendors(); break;
            case 3: searchVendor(); break;
            case 4: deleteVendor(); break;
            case 5: printf("Exiting program.\n"); return 0;
            default: printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
