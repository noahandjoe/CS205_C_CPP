#include <iostream>

using namespace std;

int main()
{
    char *pc, cc = 'A';
    int *pi, ii = 10;
    float *pf, ff = 23.4f;
    double *pd, dd = 123.78;

    pc = &cc;
    pi = &ii;
    pf = &ff;
    pd = &dd;

    cout << "sizeof(cc)=" << sizeof(cc) << ", sizeof(pc)=" << sizeof(pc) << endl;
    cout << "sizeof(ii)=" << sizeof(ii) << ", sizeof(pi)=" << sizeof(pi) << endl;
    cout << "sizeof(ff)=" << sizeof(ff) << ", sizeof(pf)=" << sizeof(pf) << endl;
    cout << "sizeof(dd)=" << sizeof(dd) << ", sizeof(pd)=" << sizeof(pd) << endl;

    cout << "&pc=" << &pc << ", pc=" << static_cast<void *>(pc) << ", pc=" << *pc << endl;
    cout << "&pi=" << &pi << ", pi=" << static_cast<void *>(pi) << ", pi=" << *pi << endl;
    cout << "&pf=" << &pf << ", pf=" << static_cast<void *>(pf) << ", pf=" << *pf << endl;
    cout << "&pd=" << &pd << ", pd=" << static_cast<void *>(pd) << ", pd=" << *pd << endl;

    const char *msg = "C/C++ programming is fun.";
    const char *copy;

    copy = msg;

    cout << "msg=" << msg << ", its address is: " << (void *)msg << ", &msg=" << &msg << endl;
    cout << "copy=" << copy << ", its address is: " << (void *)copy << ", &copy=" << &copy << endl;

    return 0;
}

// sizeof(cc)=1, sizeof(pc)=8
// sizeof(ii)=4, sizeof(pi)=8
// sizeof(ff)=4, sizeof(pf)=8
// sizeof(dd)=8, sizeof(pd)=8
// &pc=0x7ffd2d5adaf0, pc=0x7ffd2d5adae7, pc=A
// &pi=0x7ffd2d5adaf8, pi=0x7ffd2d5adae8, pi=10
// &pf=0x7ffd2d5adb00, pf=0x7ffd2d5adaec, pf=23.4
// &pd=0x7ffd2d5adb08, pd=0x7ffd2d5adb10, pd=123.78
// msg=C/C++ programming is fun., its address is: 0x56298d7bf09d, &msg=0x7ffd2d5adb18
// copy=C/C++ programming is fun., its address is: 0x56298d7bf09d, &copy=0x7ffd2d5adb20