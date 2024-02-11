#include "teht5extra.h"
#include <limits>

// Implement the member functions here

DeviceMouse::DeviceMouse() {
    // Implementation
}

DeviceTouchPad::DeviceTouchPad() {
    // Implementation
}

// Implement the rest of the member functions for DeviceTouchPad, DeviceDisplay, DeviceBaseClass, MyDeviceUI
// ...

MyDeviceUI::MyDeviceUI() {
    // Implementation
}

MyDeviceUI::~MyDeviceUI() {
    // Implementation
}

void MyDeviceUI::uiShowMenu() {
    int choice;
    do {
        std::cout << "\nDEVICE MENU\n"
                  << "1: Set Mouse Information\n2: Set Touch Pad Information\n3: Set Display Information\n4: Show Devices Information\n5: Finish\n\nChoose:"
                  << std::endl;
        std::cin >> choice;


        switch (choice) {
        case 1:
            uiSetMouseInformation();
            break;
        case 2:
            uiSetTouchPadInformation();
            break;
        case 3:
            uiSetDisplayInformation();
            break;
        case 4:
            uiShowDeviceInformation();
            break;
        case 5:
            // Finish or exit logic
            break;
        default:
            std::cout << "Invalid choice. Please choose again." << std::endl;
        }
    } while (choice != 5);  // Change the condition based on your exit criteria

}

void MyDeviceUI::uiSetMouseInformation() {
    int mouseID;
    int mousePrimaryButton
    std::cout << "SET MOUSE INFORMATION\n=============\n" << "Set Mouse ID: " << std::endl;
    std::cin >> mouseID;

    // Kysytään Mouse Primary Buttonia niin kauan, kunnes kelvollinen syöte annetaan
    while (true) {
        std::cout << "Set Mouse Primary Button (1 or 2): " << std::endl;
        std::cin >> mousePrimaryButton;

        // Tarkistetaan, että syöte on kelvollinen (1 tai 2)
        if (mousePrimaryButton == 1 || mousePrimaryButton == 2) {
            break; // Poistutaan silmukasta, jos kelvollinen syöte
        } else {
            std::cout << "Invalid input. Please enter 1 or 2." << std::endl;
            std::cin.clear(); // Nollataan syötevirta virheen jälkeen
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Puhdistetaan puskurin jäännökset
        }
    }
}

void MyDeviceUI::uiSetTouchPadInformation() {
    int touchPadID;
    int touchPadSpeed;
    std::cout << "SET TOUCHPAD INFORMATION\n=============\n" << "Set TouchPad ID: " << std::endl;
    std::cin >> touchPadID;


    while (true) {
        std::cout << "Set touchPad speed " << std::endl;
        std::cin >> touchPadSpeed;

        // Tarkistetaan, että syöte on kelvollinen (1 tai 2)
        if (touchPadSpeed >= 1 && touchPadSpeed <= 5) {
            break; // Poistutaan silmukasta, jos kelvollinen syöte
        } else {
            std::cout << "Invalid input. Please enter a value between 1 and 5." << std::endl;
            std::cin.clear(); // Nollataan syötevirta virheen jälkeen
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Puhdistetaan puskurin jäännökset
        }
    }



}

void MyDeviceUI::uiSetDisplayInformation() {
    int displayResolution;
    int displayID;
    std::cout << "Set Diplay ID: " << std::endl;
    std::cin >> displayID;
    while (true){
    std::cout << "SET DISPLAY INFORMATION\n=============\n" << "Set Display Resolution: " << std::endl;
    std::cin >> displayResolution;
    if (displayResolution >= 1 && displayResolution <= 10) {
        break; // Poistutaan silmukasta, jos kelvollinen syöte
    } else {
        std::cout << "Invalid input. Please enter a value between 1 and 10." << std::endl;
        std::cin.clear(); // Nollataan syötevirta virheen jälkeen
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Puhdistetaan puskurin jäännökset
    }
    }

}

void MyDeviceUI::uiShowDeviceInformation() {
    std::cout << "DEVICE INFORMATION\n=============" << std::endl;

    // Check if mouseID is set, otherwise display "NULL"
    if (mouseID != 0) {
        std::cout << "Mouse ID: " << mouseID << std::endl;
        std::cout << "Mouse Primary Button: " << mousePrimaryButton << std::endl;
    } else {
        std::cout << "Mouse ID: NULL" << std::endl;
        std::cout << "Mouse Primary Button: NULL" << std::endl;
    }

    // Check if touchPadID and touchPadSpeed are set, otherwise display "NULL"
    if (touchPadID != 0 && touchPadSpeed != 0) {
        std::cout << "TouchPad ID: " << touchPadID << std::endl;
        std::cout << "TouchPad Speed: " << touchPadSpeed << std::endl;
    } else {
        std::cout << "TouchPad ID: NULL" << std::endl;
        std::cout << "TouchPad Speed: NULL" << std::endl;
    }

    // Check if displayResolution and deviceID are set, otherwise display "NULL"
    if (displayResolution != 0 && deviceID != 0) {
        std::cout << "Display Resolution: " << displayResolution << std::endl;
        std::cout << "Device ID: " << deviceID << std::endl;
    } else {
        std::cout << "Display Resolution: NULL" << std::endl;
        std::cout << "Device ID: NULL" << std::endl;
    }
}
