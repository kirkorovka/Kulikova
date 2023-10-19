// WinProd2.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "WinProd2.h"

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
    LoadStringW(hInstance, IDC_WINPROD2, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Выполнить инициализацию приложения:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_WINPROD2));

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
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_WINPROD2));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_WINPROD2);
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

            HPEN hPen1,hPen3,hPen4;
            HBRUSH hBrush,hBrush2,hBrush3;
            hPen1 = CreatePen(PS_SOLID, 2, RGB(119, 13, 13));
            hBrush = CreateSolidBrush(RGB(236, 133, 14));
            hBrush2 = CreateHatchBrush(HS_FDIAGONAL, RGB(255, 0, 0));
            hPen3 = CreatePen(PS_SOLID, 3, RGB(0, 255, 0));
            hPen4 = CreatePen(PS_SOLID, 4, RGB(238, 0, 255));
            hBrush3 = CreateHatchBrush(HS_BDIAGONAL, RGB(0, 255, 0));
            
            SelectObject(hdc, hPen1);
            MoveToEx(hdc, 100, 200,NULL);
            LineTo(hdc, 150, 150);
            LineTo(hdc, 250, 150);
            LineTo(hdc, 300, 200);
            LineTo(hdc, 300, 250);
            LineTo(hdc, 50, 250);
            LineTo(hdc, 50, 200);
            LineTo(hdc, 300, 200);

            SelectObject(hdc, hBrush);
            Rectangle (hdc, 50, 200, 300, 250);
           
            SelectObject(hdc, hBrush2);
            SelectObject(hdc, hPen3);
            Ellipse(hdc, 75, 225, 125, 275);

            SelectObject(hdc, hBrush3);
            SelectObject(hdc, hPen4);
            Ellipse(hdc, 225, 225, 280, 275);

            /// Снеговик.......

            hPen1= CreatePen(PS_SOLID, 2, RGB(0,0,0));
            hBrush = CreateSolidBrush(RGB(0,0,0));
            hBrush3= CreateSolidBrush(RGB(226, 225, 225));
        
            
            SelectObject(hdc, hBrush3);
            SelectObject(hdc, hPen1);
            Ellipse(hdc, 340, 190, 500, 325);

            MoveToEx(hdc, 450, 150, NULL);
            LineTo(hdc, 550, 200);
            MoveToEx(hdc, 380,150, NULL);
            LineTo(hdc, 315, 215);
            
            
            Ellipse(hdc, 360, 137, 475, 237);
           
            

            MoveToEx(hdc, 387, 140, NULL);
            LineTo(hdc, 450, 140);
            LineTo(hdc, 450, 115);
            LineTo(hdc, 387, 115);
            LineTo(hdc, 387, 140);
            MoveToEx(hdc, 450, 115, NULL);
            LineTo(hdc, 500, 100);
            LineTo(hdc, 505, 112);
            LineTo(hdc, 475, 130);
            MoveToEx(hdc, 450, 115, NULL);
            LineTo(hdc, 487, 137);
            LineTo(hdc, 480, 150);
            LineTo(hdc, 450, 140);
            MoveToEx(hdc, 500, 100,NULL);
            LineTo(hdc, 512, 90);
            MoveToEx(hdc,502,106,NULL );
            LineTo(hdc, 512, 100);
            MoveToEx(hdc, 505, 112, NULL);
            LineTo(hdc, 515, 110);
            MoveToEx(hdc, 487, 137, NULL);
            LineTo(hdc, 505, 140);
            MoveToEx(hdc, 484, 145, NULL);
            LineTo(hdc, 505, 150);
            MoveToEx(hdc, 480, 150, NULL);
            LineTo(hdc, 500, 160);
            
            
            Ellipse(hdc, 375, 50, 460, 130);

            MoveToEx(hdc, 412, 87, NULL);
            LineTo(hdc, 415, 92);
            LineTo(hdc, 362, 115);
            LineTo(hdc, 412, 87);

            Ellipse(hdc, 398, 73, 403, 76);
            Ellipse(hdc, 434, 73, 439, 76);

            SelectObject(hdc, hBrush);
            Ellipse(hdc, 400, 160, 410, 170);
            Ellipse(hdc, 400, 200, 410, 210);
            Ellipse(hdc, 400, 250, 410, 260);

            SelectObject(hdc, hBrush3);
            Ellipse(hdc, 365, 300, 385, 325);
            Ellipse(hdc, 460, 300, 480, 325);

            Arc(hdc, 420, 90, 435, 120, 420, 105, 435, 105);

            MoveToEx(hdc, 385, 62, NULL);
            LineTo(hdc, 450, 62);
            LineTo(hdc, 445, 12);
            LineTo(hdc, 415, 10);
            LineTo(hdc, 385, 62);

            //грузовичок

            hPen1 = CreatePen(PS_SOLID, 2, RGB(0, 0, 0));
            hBrush = CreateSolidBrush(RGB(255, 255, 0));
            hBrush2 = CreateSolidBrush(RGB(102, 204, 0));
            hBrush3 = CreateSolidBrush(RGB(102, 0, 204));

            SelectObject(hdc, hPen1);
            MoveToEx(hdc, 650, 250, NULL);
            LineTo(hdc, 650, 300);
            LineTo(hdc, 925, 300);
            LineTo(hdc, 925, 250);
            LineTo(hdc, 650, 250);
            MoveToEx(hdc, 675, 250, NULL);
            LineTo(hdc, 700, 200);
            LineTo(hdc, 750, 200);
            MoveToEx(hdc, 750, 250, NULL);
            LineTo(hdc, 750, 150);
            LineTo(hdc, 925, 150);
            LineTo(hdc, 925, 250);

            SelectObject(hdc, hBrush);
            Rectangle(hdc, 750,150,925,250);

            SelectObject(hdc, hBrush2);
            Rectangle(hdc, 650,250,925,300);

            SelectObject(hdc, hBrush3);
            Ellipse(hdc, 675,275,725,325);
            Ellipse(hdc, 850,275,900,325);

            //амбар

            hPen1 = CreatePen(PS_SOLID, 6, RGB(204,255,255));
            hBrush = CreateSolidBrush(RGB(204,0,0));
            hBrush2 =CreateSolidBrush(RGB(0, 0, 0));
            hPen3 = CreatePen(PS_SOLID, 3, RGB(153,0,0));


            //красные заливки
            SelectObject(hdc, hBrush);
            Chord(hdc, 975, 75, 1200, 325, 1200, 175, 975, 175);

            Rectangle(hdc, 975, 175, 1200, 325);

            //полоски горизонтальные
            SelectObject(hdc, hPen3);
            MoveToEx(hdc, 975, 325, NULL);
            LineTo(hdc, 1050, 325);
            MoveToEx(hdc, 1125, 325, NULL);
            LineTo(hdc, 1200, 325);

            MoveToEx(hdc, 975, 300, NULL);
            LineTo(hdc, 1050, 300);
            MoveToEx(hdc, 1125, 300, NULL);
            LineTo(hdc, 1200, 300);

            MoveToEx(hdc, 975, 275, NULL);
            LineTo(hdc, 1050, 275);
            MoveToEx(hdc, 1125, 275, NULL);
            LineTo(hdc, 1200, 275);

            MoveToEx(hdc, 975, 250, NULL);
            LineTo(hdc, 1200, 250); 
            MoveToEx(hdc, 975, 225, NULL);
            LineTo(hdc, 1200, 225);
            MoveToEx(hdc, 975, 200, NULL);
            LineTo(hdc, 1200, 200);

            MoveToEx(hdc, 975, 325, NULL);
            LineTo(hdc, 1050, 325);
            MoveToEx(hdc, 1125, 325, NULL);
            LineTo(hdc, 1200, 325);

            MoveToEx(hdc, 975, 300, NULL);
            LineTo(hdc, 1050, 300);
            MoveToEx(hdc, 1125, 300, NULL);
            LineTo(hdc, 1200, 300);

            MoveToEx(hdc, 975, 275, NULL);
            LineTo(hdc, 1050, 275);
            MoveToEx(hdc, 1125, 275, NULL);
            LineTo(hdc, 1200, 275);




            //полоски вертикальные
            MoveToEx(hdc, 1000, 125, NULL);
            LineTo(hdc, 1000, 175);

            MoveToEx(hdc, 1025, 100, NULL);
            LineTo(hdc, 1025, 175);

            MoveToEx(hdc, 1050, 85, NULL);
            LineTo(hdc, 1050, 175);

            MoveToEx(hdc, 1075, 80, NULL);
            LineTo(hdc, 1075, 175);

            MoveToEx(hdc, 1100, 80, NULL);
            LineTo(hdc, 1100, 175);

            MoveToEx(hdc, 1125, 85, NULL);
            LineTo(hdc, 1125, 175);

            MoveToEx(hdc, 1150, 100, NULL);
            LineTo(hdc, 1150, 175);

            MoveToEx(hdc,1175, 125, NULL);
            LineTo(hdc, 1175, 175);
           
            //черные заливки

            SelectObject(hdc, hBrush2);
            Rectangle(hdc, 1050, 100, 1125, 150);
            Rectangle(hdc, 1000, 200, 1050, 225);
            Rectangle(hdc, 1125, 200, 1175, 225);
            


            //белый контур
            SelectObject(hdc, hPen1);
            MoveToEx(hdc,975, 325, NULL);
            LineTo(hdc, 975, 175);
            LineTo(hdc, 1200, 175);
            LineTo(hdc, 1200, 325);

            //крыша
            Arc(hdc, 975, 75, 1200, 325, 1200, 175, 975, 175);
            
            MoveToEx(hdc, 1050, 150, NULL);
            LineTo(hdc, 1050, 100);
            LineTo(hdc, 1125, 100);
            LineTo(hdc,1125, 150);
            LineTo(hdc, 1050, 150);
            MoveToEx(hdc, 1087, 150, NULL);
            LineTo(hdc, 1087, 100);
            MoveToEx(hdc, 1000, 225, NULL);
            LineTo(hdc, 1000, 200);
            LineTo(hdc, 1050, 200);
            LineTo(hdc, 1050, 225);
            LineTo(hdc, 1000, 225);
            MoveToEx(hdc, 1125, 225, NULL);
            LineTo(hdc, 1125, 200);
            LineTo(hdc, 1175, 200);
            LineTo(hdc, 1175, 225);
            LineTo(hdc, 1125, 225);
            MoveToEx(hdc, 1050, 325, NULL);
            LineTo(hdc, 1050, 250);
            LineTo(hdc, 1125, 250);
            LineTo(hdc, 1125, 325);
            MoveToEx(hdc, 1050, 250, NULL);
            LineTo(hdc, 1125, 325);
            MoveToEx(hdc, 1125, 250, NULL);
            LineTo(hdc, 1050, 325);
            MoveToEx(hdc, 1087, 250, NULL);
            LineTo(hdc, 1087, 325);
            MoveToEx(hdc, 1050, 287, NULL);
            LineTo(hdc, 1125, 287);
            MoveToEx(hdc, 1087, 250, NULL);
            LineTo(hdc, 1050, 287);
            LineTo(hdc, 1087, 325);
            LineTo(hdc, 1125, 287);
            LineTo(hdc, 1087, 250);

           

            



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