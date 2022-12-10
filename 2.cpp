#include <iostream>
#include <Windows.h>
using namespace std;
const int SLEEP_DURATION = 32;
bool pressing(int vKey) {
    return GetAsyncKeyState(vKey) >> 15;
}
void pressDown(int key) {
    if (key == 1) {
        mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); // 鼠标左键按下 
    } else if (key == 2) {
        mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
    } else if (key == 4) {
        mouse_event(MOUSEEVENTF_MIDDLEDOWN, 0, 0, 0, 0);
    } else {
        keybd_event(key, 0, 0, 0);
    }
}
void pressUp(int key) {
    if (key == 1) {
        mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    } else if (key == 2) {
        mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
    } else if (key == 4) {
        mouse_event(MOUSEEVENTF_MIDDLEUP, 0, 0, 0, 0);
    } else {
        keybd_event(key, 0, 2, 0);
    }
}
void press(int key) {
    pressDown(key);
    Sleep(SLEEP_DURATION);
    pressUp(key);
}
int main() {
    while (1) {
        if (pressing(VK_MENU)) { // 按住ALT
            if (pressing(VK_DIVIDE)) { // 同时按住小键盘除号
                press(VK_VOLUME_MUTE); // 静音或开启
            } else if (pressing(VK_SUBTRACT)) { // 小键盘减号
                press(VK_VOLUME_DOWN); // 降低音量
            } else if (pressing(VK_ADD)) { // 小键盘加号
                press(VK_VOLUME_UP); // 提高音量
            }
        }
        Sleep(SLEEP_DURATION);
    }
    return 0;
}