#include <stdio.h> 
#include <windows.h>



void modifyPointer(PBYTE ptr) {
    printf("addr: %p\n", ptr+5);
}

//�Ѵ� ���� �ּҰ� ��µ�


int main() {
    PBYTE WriteFile = (PBYTE)GetProcAddress(GetModuleHandle("kernelbase.dll"), "WriteFile");

    printf("addr: %p\n", WriteFile);

    modifyPointer(WriteFile);

   

    return 0;
}
