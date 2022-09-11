#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<dos.h>
#include<string.h>

int main()
{
	char user_option[3];
	
	printf("\nDo you want to unblock usb ports on your computer? [yes/no]: ");
	gets(user_option);
	

	if(strcmp(user_option, "yes")==0)
	{

		int isTrue = system("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\USBSTOR \/v Start \/t REG_DWORD \/d 3 \/f");
		
		
		if(isTrue==0)
			puts("\n\nAll the usb ports has been unblocked successfully.");

		else
			puts("\n\nYou must be an Administrator to perform this action.");
			
		
		getch();
	}
	else{

		puts("\n\nChoose the correct option. [yes/no]");
		
		getch();
	}

	return 0;
}

