// WinProdVoidLogo.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "WinProdVoidLogo.h"

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
    LoadStringW(hInstance, IDC_WINPRODVOIDLOGO, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Выполнить инициализацию приложения:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_WINPRODVOIDLOGO));

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

void logoSpruce(HDC hdc, int x, int y) {
    //lab9.1

    //вт
    MoveToEx(hdc, 20 + x, 0 + y, NULL);
    LineTo(hdc, 30 + x, 20 + y);
    LineTo(hdc, 10 + x, 20 + y);
    LineTo(hdc, 20 + x, 0 + y);

    //ст
    MoveToEx(hdc, 20 + x, 20 + y, NULL);
    LineTo(hdc, 30 + x, 40 + y);
    LineTo(hdc, 10 + x, 40 + y);
    LineTo(hdc, 20 + x, 20 + y);

    //нт
    MoveToEx(hdc, 20 + x, 30 + y, NULL);
    LineTo(hdc, 40 + x, 80 + y);
    LineTo(hdc, 0 + x, 80 + y);
    LineTo(hdc, 20 + x, 30 + y);

}

void logoTruck(HDC hdc, int x, int y) {
    HPEN hPen = CreatePen(PS_SOLID, 3, RGB(0, 0, 200));
    SelectObject(hdc, hPen);

    Rectangle(hdc, 0 + x, 30 + y, 40 + x, 50 + y);
    Rectangle(hdc, 10 + x, 10 + y, 40 + x, 30 + y);
    Rectangle(hdc, 40 + x, 0 + y, 100 + x, 50 + y);

    hPen = CreatePen(PS_SOLID, 3, RGB(100, 0, 0));
    SelectObject(hdc, hPen);

    Ellipse(hdc, 10 + x, 40 + y, 30 + x, 60 + y);
    Ellipse(hdc, 70 + x, 40 + y, 90 + x, 60 + y);
}

void drawTruck1(HDC hdc) {
    logoTruck(hdc, 10, 10);
    logoTruck(hdc, 10, 310);
    logoTruck(hdc, 310, 10);
    logoTruck(hdc, 310, 310);
    logoTruck(hdc, 160, 160);
}

void drawTruck2(HDC hdc) {
    int x = 0;
    do {
        logoTruck(hdc, x, 0);
        x += 110;
    } while (x < 400);
}

void drawTruck3(HDC hdc) {
    int y = 0;
    do {
        logoTruck(hdc, 0, y);
        y += 70;
    } while (y < 400);
}

void drawTruck4(HDC hdc) {
    int x = 0;
    int y = 0;
    do {
        logoTruck(hdc, x, y);
        x += 100;
        y += 50;
    } while (x < 500);
}

void logoSnowman(HDC hdc, int x, int y) {
    Ellipse(hdc, 20 + x, 0 + y, 40 + x, 20 + y);
    Ellipse(hdc, 10 + x, 20 + y, 50 + x, 60 + y);
    Ellipse(hdc, 0 + x, 60 + y, 60 + x, 120 + y);

    MoveToEx(hdc, 39 + x, 122 + y, NULL);
    LineTo(hdc, 65 + x, 20 + y);

    MoveToEx(hdc, 20 + x, 23 + y,NULL);
    LineTo(hdc, 0 + x, 40 + y);
    MoveToEx(hdc, 40 + x, 23 + y, NULL);
    LineTo(hdc, 60 + x, 40 + y);

    int i = 0;
    
    do {
        MoveToEx(hdc, 65 + x, 20 + y, NULL);
        LineTo(hdc, 63 + x +i, 0 + y);
        i += 3;
        i++;
    } while (i < 10);
}

void drawSnowman1(HDC hdc) {

    logoSnowman(hdc, 10, 10);
    logoSnowman(hdc, 10, 310);
    logoSnowman(hdc, 310, 10);
    logoSnowman(hdc, 310, 310);
    logoSnowman(hdc, 160, 160);

}

void drawSnowman2(HDC hdc) {
    int x = 0;
    do {
        logoSnowman(hdc, x, 0);
        x += 110;
    } while (x < 400);
}

void drawSnowman3(HDC hdc) {
    int y = 0;
    do {
        logoSnowman(hdc, 0, y);
        y += 130;
    } while (y < 400);
}

void drawSnowman4(HDC hdc) {
    int x = 0;
    int y = 0;
    do {
        logoSnowman(hdc, x, y);
        x += 100;
        y += 50;
    } while (x < 500);
}

void logoMitsubishi(HDC hdc, int x, int y) {
    
    HPEN hPen = CreatePen(PS_SOLID, 3, RGB(255, 0, 0));
    SelectObject(hdc, hPen);

    //лр
    MoveToEx(hdc, 10 + x, 90 + y, NULL);
    LineTo(hdc, 25 + x, 65 + y);
    LineTo(hdc, 55 + x, 65 + y);
    LineTo(hdc, 40 + x, 90 + y);
    LineTo(hdc, 10 + x, 90 + y);

    //вр
    MoveToEx(hdc, 55 + x, 10 + y, NULL);
    LineTo(hdc, 70 + x, 38 + y);
    LineTo(hdc, 55 + x, 65 + y);
    LineTo(hdc, 40 + x, 38 + y);
    LineTo(hdc, 55 + x, 10 + y);

    //нр
    MoveToEx(hdc, 55 + x, 65 + y, NULL);
    LineTo(hdc, 85 + x, 65 + y);
    LineTo(hdc, 100 + x, 90 + y);
    LineTo(hdc, 70 + x, 90 + y);
    LineTo(hdc, 55 + x, 65 + y);

}

void drawMitsubishi1(HDC hdc) {
    logoMitsubishi(hdc, 10, 10);
    logoMitsubishi(hdc, 10, 310);
    logoMitsubishi(hdc, 310, 10);
    logoMitsubishi(hdc, 310, 310);
    logoMitsubishi(hdc, 160, 160);
}

void drawMitsubishi2(HDC hdc) {
    int x = 0;
    do {
        logoMitsubishi(hdc, x, 0);
        x += 110;
    } while (x < 1000);
}

void drawMitsubishi3(HDC hdc) {
    int y = 0;
    do {
        logoMitsubishi(hdc, 0, y);
        y += 90;
    } while (y < 500);
}

void drawMitsubishi4(HDC hdc) {
    int x = 0;
    int y = 0;
    do {
        logoMitsubishi(hdc, x, y);
        x += 100;
        y += 50;
    } while (x < 500);
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
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_WINPRODVOIDLOGO));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_WINPRODVOIDLOGO);
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

            //lab9.1
            
            
            //пять елок 
            logoSpruce(hdc, 0, 0);
            logoSpruce(hdc, 200, 200);
            logoSpruce(hdc, 100, 100);
            logoSpruce(hdc, 0, 200);
            logoSpruce(hdc, 200, 0);
            
            //елки в ряд
            int x = 0;
            do {
                logoSpruce(hdc, x, 0);
                x += 50;
            } while (x < 400);

            //елки в столбик
            int y = 0;
            do {
                logoSpruce(hdc, 0, y);
                y += 90;
            } while (y < 300);
            
            //елки диагональ

            x = 0;
            y = 0;
            do {
                logoSpruce(hdc, x, y);
                x += 50;
                y += 90;
            } while (x < 250);
            
            //lab9.2

            drawTruck1(hdc);
            drawTruck2(hdc);
            drawTruck3(hdc);
            drawTruck4(hdc);

            //lab9.3

            drawSnowman1(hdc);
            drawSnowman2(hdc);
            drawSnowman3(hdc);
            drawSnowman4(hdc);
            
            

            //lab9.4

            logoMitsubishi(hdc, 0, 0);

            //lab9.5

            drawMitsubishi1(hdc);
            drawMitsubishi2(hdc); 
            drawMitsubishi3(hdc);
            drawMitsubishi4(hdc);





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
