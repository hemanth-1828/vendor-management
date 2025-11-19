#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    int id;
    char name[50];
    char service[50];
    char phone[20];
} Vendor;

Vendor vList[MAX];
int vCount = 0;

// Function prototypes
void addVendor();
void viewVendors();
void searchVendor();
void updateVendor();
void deleteVendor();

int main() {
    int choice;

    while (1) {
        printf("\n====== Vendor Management ======\n");
        printf("1. Add Vendor\n");
        printf("2. View Vendors\n");
        printf("3. Search Vendor\n");
        printf("4. Update Vendor\n");
        printf("5. Delete Vendor\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addVendor(); break;
            case 2: viewVendors(); break;
            case 3: searchVendor(); break;
            case 4: updateVendor(); break;
            case 5: deleteVendor(); break;
            case 6: return 0;
            default: printf("Invalid choice!\n");
        }
    }
}

void addVendor() {
    if (vCount >= MAX) {
        printf("Vendor list full!\n");
        return;
    }

    Vendor v;
    printf("\nEnter Vendor ID: ");
    scanf("%d", &v.id);

    printf("Enter Name: ");
    scanf("%s", v.name);

    printf("Enter Service (Catering/Decor/etc): ");
    scanf("%s", v.service);

    printf("Enter Phone: ");
    scanf("%s", v.phone);

    vList[vCount++] = v;

    printf("Vendor added successfully!\n");
}

void viewVendors() {
    if (vCount == 0) {
        printf("No vendors to display.\n");
        return;
    }

    printf("\n=== Vendor List ===\n");
    for (int i = 0; i < vCount; i++) {
        printf("ID: %d | Name: %s | Service: %s | Phone: %s\n",
               vList[i].id, vList[i].name, vList[i].service, vList[i].phone);
    }
}

void searchVendor() {
    int id;
    printf("\nEnter Vendor ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < vCount; i++) {
        if (vList[i].id == id) {
            printf("Vendor Found!\n");
            printf("Name: %s\nService: %s\nPhone: %s\n",
                   vList[i].name, vList[i].service, vList[i].phone);
            return;
        }
    }
    printf("Vendor not found.\n");
}

void updateVendor() {
    int id;
    printf("\nEnter Vendor ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < vCount; i++) {
        if (vList[i].id == id) {
            printf("Enter new Name: ");
            scanf("%s", vList[i].name);

            printf("Enter new Service: ");
            scanf("%s", vList[i].service);

            printf("Enter new Phone: ");
            scanf("%s", vList[i].phone);

            printf("Vendor updated!\n");
            return;
        }
    }
    printf("Vendor not found.\n");
}

void deleteVendor() {
    int id;
    printf("\nEnter Vendor ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < vCount; i++) {
        if (vList[i].id == id) {
            for (int j = i; j < vCount - 1; j++)
                vList[j] = vList[j + 1];

            vCount--;
            printf("Vendor deleted!\n");
            return;
        }
    }
    printf("Vendor not found.\n");
}
