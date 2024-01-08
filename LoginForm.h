//---------------------------------------------------------------------------

#ifndef LoginFormH
#define LoginFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TMyLoginForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *usernameEdit;
	TLabel *Label1;
	TEdit *Edit1;
	TLabel *Label2;
	TEdit *passwordEdit;
	TLabel *Label3;
	TButton *loginButton;
	TLabel *msg;
	void __fastcall loginButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMyLoginForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMyLoginForm *MyLoginForm;
//---------------------------------------------------------------------------
#endif
