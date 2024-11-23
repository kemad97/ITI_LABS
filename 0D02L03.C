
void setTextColor(int color) {
    printf("\033[%dm", color);
}

void resetTextColor() {
    printf("\033[0m");
}

int main() {
    char choice;

    printf("Enter a number (1-3 to select, Enter to exit):\n");

    printf("Coffee\n");
    printf("Tea\n");
    printf("Juice\n\n");

    while (1) {
        choice = getch();

        if (choice == '\n' || choice == '\r') {
            break; 
        }


        switch (choice) {
            case '1':
				setTextColor(32);
				printf("Coffee\n");
				resetTextColor();
				printf("Tea\n");
				printf("Juice\n\n");
				break;

			case '2':
				printf("Coffee\n");
				setTextColor(32);
				printf("Tea\n");
				resetTextColor();
				printf("Juice\n\n");
				break;

			case '3':
				printf("Coffee\n");
				printf("Tea\n");
				setTextColor(32);
				printf("Juice\n\n");
				resetTextColor();
				break;

			default:
				printf(" Invalid, Please Enter 1, 2, or 3.\n");
				break;
		}

		printf("Enter a number (1-3 to select, Enter to exit):\n");
	}


	printf("Exiting..\n");

    return 0;
}
