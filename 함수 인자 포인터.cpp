#include <stdio.h> 
#include <windows.h>



void modifyPointer(PBYTE ptr) {
    printf("addr: %p\n", ptr+5);
}

//둘다 같은 주소가 출력됨


int main() {
    PBYTE WriteFile = (PBYTE)GetProcAddress(GetModuleHandle("kernelbase.dll"), "WriteFile");

    printf("addr: %p\n", WriteFile);

    modifyPointer(WriteFile);

   

    return 0;
}
