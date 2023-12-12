//Images.cpp

#include "Images.h"


void Image0(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
    SelectObject(hdc, hPen);

    POINT p[4];
    p[0].x = cx;
    p[0].y = cy + 20;
    p[1].x = cx + 20;
    p[1].y = cy - 20;
    p[2].x = cx - 20;
    p[2].y = cy - 20;
    p[3].x = cx;
    p[3].y = cy + 20;

    Polyline(hdc, p, 4);
    DeleteObject(hPen);

}

void Image1(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
    SelectObject(hdc, hPen);

    POINT p[4] = {
        cx,cy - 20,
        cx + 20,cy + 20,
        cx - 20,cy + 20,
        cx,cy - 20
    };


    Polyline(hdc, p, 4);
    DeleteObject(hPen);

}

void Image2(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
    SelectObject(hdc, hPen);

    POINT p[] = {
        cx,cy - 20,
        cx + 20,cy,
        cx,cy + 20,
        cx - 20,cy,
        cx,cy - 20
    };


    Polyline(hdc, p, 5);
    DeleteObject(hPen);

}


void Image3(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
    SelectObject(hdc, hPen);

    POINT p[] = {
        cx,cy,
        cx - 20,cy - 20,
        cx,cy + 20,
        cx + 20,cy - 20,
        cx,cy
    };


    Polyline(hdc, p, 5);
    DeleteObject(hPen);

}

void Image4(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
    SelectObject(hdc, hPen);

    POINT p[] = {
        cx,cy,
        cx - 20,cy - 20,
        cx - 20,cy + 20,
        cx + 20,cy + 20,
        cx + 20,cy - 20,
        cx,cy
    };


    Polyline(hdc, p, 6);
    DeleteObject(hPen);

}