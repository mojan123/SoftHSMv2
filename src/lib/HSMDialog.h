#include <gtkmm.h>
#include <fstream>
#include <iostream>

using namespace std;
using namespace Gtk;

class HSMDialog: public Window {
	// controls

protected:
	VBox vBoxMain;
	Label labelUsername;
	Entry entryUsername;
	Label labelPassword;
	Entry entryPassword;
	Label labelPin;
	Entry entryPin;

	Button buttonCheck;

	// methods

public:
	HSMDialog();

	// Destructor
	virtual ~HSMDialog();

protected:
	void buttonCheckClicked();
};
