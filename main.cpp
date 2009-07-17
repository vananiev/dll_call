//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
typedef int (WINAPI *BP)(char *);

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnMakeClick(TObject *Sender)
{
com->Lines[com->Lines->Count-1];
HINSTANCE hMyDll;
 	if((hMyDll=LoadLibrary("dll\\main.dll"))==NULL) return;
                BP bp;
		bp=(BP)GetProcAddress(hMyDll,"_aa");
                if(bp!=NULL)
 	                {int a=(*bp)("fhgfh");
                        a==a;
                        }

}
//---------------------------------------------------------------------------
