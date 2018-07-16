#include "HSMDialog.h"

// Constructor
HSMDialog::HSMDialog() {
	set_border_width(10);

	// vBoxMain
	add(vBoxMain);
	vBoxMain.show();

	// labelUsername
	labelUsername.set_label("Username:");
	vBoxMain.add(labelUsername);
	labelUsername.show();

	// entryUsername
	entryUsername.set_text("");
	vBoxMain.add(entryUsername);
	entryUsername.show();

	// labelPassword
	labelPassword.set_label("Password:");
	vBoxMain.add(labelPassword);
	labelPassword.show();

	// entryPassword
	entryPassword.set_text("");
	entryPassword.set_visibility(false);
	vBoxMain.add(entryPassword);
	entryPassword.show();

	// labelPin
	labelPin.set_label("PIN:");
	vBoxMain.add(labelPin);
	labelPin.show();

	// entryPin
	entryPin.set_text("");
	entryPin.set_visibility(false);
	vBoxMain.add(entryPin);
	entryPin.show();

	// buttonCheck
	buttonCheck.set_label("Check");
	buttonCheck.signal_clicked().connect(
			sigc::mem_fun(*this, &HSMDialog::buttonCheckClicked));
	vBoxMain.add(buttonCheck);
	buttonCheck.show();
}

// Destructor
HSMDialog::~HSMDialog() {
}

void HSMDialog::buttonCheckClicked() {
	string username = entryUsername.get_text();
	string password = entryPassword.get_text();
	string pin = entryPin.get_text();

	// open a file in write mode.
	std::ofstream outfile;
	outfile.open("userinput.dat");

	// write inputted data into the file.
	outfile << username << std::endl;
	outfile << password << std::endl;
	outfile << pin << std::endl;

	// close the opened file.
	outfile.close();
	gtk_main_quit();

	//throw runtime_error("Unrecognized display mode!");
}

