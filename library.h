typedef int (WINAPI *F)(char *);
#define MAX_DLL 10
class L{
F f[MAX_DLL][1024];
int cnt_f[MAX_DLL];
char dll[MAX_DLL];
int cnt_dll;

L(){
cnt_dll=0;
for(int i=0,i<MAX_DLL,i++) cnt_f[i]=0;}
}


BOOL add_library(char* dir,HINSTANCE hDll,)
{
        if((hDll=LoadLibrary(dir))==NULL) return false;

        \\подключение функций
        for(int i=0,,i++)
        
		
        
        return true;
}