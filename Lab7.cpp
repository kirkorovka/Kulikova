// WinProd.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "WinProd.h"

#define MAX_LOADSTRING 100

// Глобальные переменные:
HINSTANCE hInst;                                // текущий экземпляр
WCHAR szTitle[MAX_LOADSTRING];                  // Текст строки заголовка
WCHAR szWindowClass[MAX_LOADSTRING];            // имя класса главного окна

// Отправить объявления функций, включенных в этот модуль кода:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: Разместите код здесь.

    // Инициализация глобальных строк
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_WINPROD, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Выполнить инициализацию приложения:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_WINPROD));

    MSG msg;

    // Цикл основного сообщения:
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int) msg.wParam;
}



//
//  ФУНКЦИЯ: MyRegisterClass()
//
//  ЦЕЛЬ: Регистрирует класс окна.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style          = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc    = WndProc;
    wcex.cbClsExtra     = 0;
    wcex.cbWndExtra     = 0;
    wcex.hInstance      = hInstance;
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_WINPROD));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_WINPROD);
    wcex.lpszClassName  = szWindowClass;
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

//
//   ФУНКЦИЯ: InitInstance(HINSTANCE, int)
//
//   ЦЕЛЬ: Сохраняет маркер экземпляра и создает главное окно
//
//   КОММЕНТАРИИ:
//
//        В этой функции маркер экземпляра сохраняется в глобальной переменной, а также
//        создается и выводится главное окно программы.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   hInst = hInstance; // Сохранить маркер экземпляра в глобальной переменной

   HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

   if (!hWnd)
   {
      return FALSE;
   }

   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);

   return TRUE;
}

//
//  ФУНКЦИЯ: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  ЦЕЛЬ: Обрабатывает сообщения в главном окне.
//
//  WM_COMMAND  - обработать меню приложения
//  WM_PAINT    - Отрисовка главного окна
//  WM_DESTROY  - отправить сообщение о выходе и вернуться
//
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            // Разобрать выбор в меню:
            switch (wmId)
            {
            case IDM_ABOUT:
                DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
                break;
            case IDM_EXIT:
                DestroyWindow(hWnd);
                break;
            default:
                return DefWindowProc(hWnd, message, wParam, lParam);
            }
        }
        break;
    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            // TODO: Добавьте сюда любой код прорисовки, использующий HDC...

            HPEN hPen1,hPen2,hPen3,hPen4,hPen5;
            hPen1 = CreatePen(PS_SOLID, 5, RGB(203, 16, 16));
            hPen2 = CreatePen(PS_SOLID, 5, RGB(153, 0, 153));
            hPen3 = CreatePen(PS_SOLID, 3, RGB(0, 102, 204));
            hPen4 = CreatePen(PS_SOLID, 7, RGB(14, 102, 52));
            hPen5 = CreatePen(PS_SOLID, 5, RGB(255,51,153));
            
            //roof
            SelectObject(hdc, hPen1);
            MoveToEx(hdc, 150, 350, NULL);
            LineTo(hdc, 275, 250);
            LineTo(hdc, 400, 350);
            //house
            SelectObject(hdc, hPen2);
            LineTo(hdc, 400, 525);
            LineTo(hdc, 150, 525);
            LineTo(hdc, 150, 350);
            LineTo(hdc, 400, 350);
            //window
            SelectObject(hdc, hPen3);
            MoveToEx(hdc, 225, 400, NULL);
            LineTo(hdc, 225, 475);
            LineTo(hdc, 325, 475);
            LineTo(hdc, 325, 400);
            LineTo(hdc, 225, 400);
            //frame
            MoveToEx(hdc, 275, 400, NULL);
            LineTo(hdc, 275, 475);
            MoveToEx(hdc, 275, 425, NULL);
            LineTo(hdc, 325, 425);
            
            //spruce
            SelectObject(hdc, hPen4);
            MoveToEx(hdc, 525, 375, NULL);
            LineTo(hdc, 550, 400);
            LineTo(hdc, 500, 400);
            LineTo(hdc, 525, 375);
            MoveToEx(hdc, 525, 400, NULL);
            LineTo(hdc, 575, 450);
            LineTo(hdc, 475, 450);
            LineTo(hdc, 525, 400);
            MoveToEx(hdc, 525, 450, NULL);
            LineTo(hdc, 600, 525);
            LineTo(hdc, 450, 525);
            LineTo(hdc, 525, 450);

            //branches
            SelectObject(hdc, hPen5);
            MoveToEx(hdc, 75, 525,NULL);
            LineTo(hdc, 75, 345);

            MoveToEx(hdc, 75, 513,NULL);
            LineTo(hdc, 110, 475);
            MoveToEx(hdc, 75, 500, NULL);
            LineTo(hdc, 30, 450);
            MoveToEx(hdc, 75, 480, NULL);
            LineTo(hdc, 120, 435);
            MoveToEx(hdc, 75, 465, NULL);
            LineTo(hdc, 30, 420);
            MoveToEx(hdc, 75, 445, NULL);
            LineTo(hdc, 115, 400);
            MoveToEx(hdc, 75, 420, NULL);
            LineTo(hdc, 40, 380);
            MoveToEx(hdc, 75, 400, NULL);
            LineTo(hdc, 100, 375);
            MoveToEx(hdc, 75, 375, NULL);
            LineTo(hdc, 60, 360);

            //bridge
            hPen1 = CreatePen(PS_DOT, 6, RGB(96, 96, 96));
            SelectObject(hdc, hPen1);
            MoveToEx(hdc, 650, 550, NULL);
            LineTo(hdc, 700, 550);
            LineTo(hdc, 750, 500);
            LineTo(hdc, 825, 500);
            LineTo(hdc, 875, 550);
            LineTo(hdc, 925, 550);
            LineTo(hdc, 850, 475);
            LineTo(hdc, 725, 475);
            LineTo(hdc, 650, 550);
            SelectObject(hdc, hPen3);
            LineTo(hdc, 650, 525);
            LineTo(hdc, 687, 512);
            LineTo(hdc, 725, 450);
            LineTo(hdc, 725, 475);
            MoveToEx(hdc, 725, 450,NULL);
            LineTo(hdc, 787, 475);
            LineTo(hdc, 850, 450);
            LineTo(hdc, 850, 475);
            MoveToEx(hdc, 850, 450, NULL);
            LineTo(hdc, 887, 512);
            LineTo(hdc, 925, 525);
            LineTo(hdc, 925, 550);
            MoveToEx(hdc, 925, 525, NULL);
            LineTo(hdc, 850, 450);
            LineTo(hdc, 725, 450);
            LineTo(hdc, 650, 525);

            //bush1(lab7.1)
            
            hPen2 = CreatePen(PS_SOLID, 3, RGB(255, 162, 0));
            hPen4 = CreatePen(PS_SOLID, 3, RGB(14, 102, 52));
            SelectObject(hdc, hPen2);
            int x2 = 400, y2 = 150;
            int x1 = 500, y1 = 250;
            int i = 0;
            do {
                MoveToEx(hdc, x1, y1, NULL);
                LineTo(hdc, x2, y2);
                x2 += 10;
                i++;
            } while (i < 20);

            //bush2(lab7.2)
           
           
            SelectObject(hdc, hPen4);
            x2 = 100, y2 = 250;
            x1 = 0, y1 = 250;
            int x3 = 200, y3 = 250;
            i = 0;
            do {
                MoveToEx(hdc, x1, y1, NULL);
                LineTo(hdc, x2, y2);
                x1 += 10;
                y1 -= 20;
                MoveToEx(hdc, x3, y3, NULL);
                LineTo(hdc, x2, y2);
                x3 -= 10;
                y3 -= 20;
                i++;
            } while (i < 11);

            //fence(lab7.2)

            SelectObject(hdc, hPen1);
            x1 = 150, y1 = 0;
            x2 = 150, y2 = 100;
            i = 0;
            do {
                MoveToEx(hdc, x1, y1, NULL);
                LineTo(hdc, x2, y2);
                x1 += 10;
                x2 += 10;
       
                i++;
            } while (i < 30);
          
            //grass(lab7.3)

            SelectObject(hdc, hPen4);
            x1 = 25, y1 = 525;
            x2 = 25, y2 = 515;
            i = 0;
            do {
                MoveToEx(hdc, x1, y1, NULL);
                LineTo(hdc, x2, y2);
                x1 += 5;
                x2 += 5;
                i++;
            } while (i < 20);

            //roof2
            hPen1 = CreatePen(PS_SOLID, 3, RGB(203, 16, 16));
            SelectObject(hdc, hPen1);
            x1 = 150, y1 =350;
            x2 = 275, y2 = 250;
            x3 = 400, y3 = 350;
            int x4 = 275, y4 = 250;
            i = 0;
            do {
                MoveToEx(hdc, x1, y1, NULL);
                LineTo(hdc, x2, y2);

                x2 += 14;
                y2 += 11;

                MoveToEx(hdc, x3, y3, NULL);
                LineTo(hdc, x4, y4);

                x4 -= 14;
                y4 += 11;

                i++;
            } while (i < 10);


            EndPaint(hWnd, &ps);
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

// Обработчик сообщений для окна "О программе".
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}
