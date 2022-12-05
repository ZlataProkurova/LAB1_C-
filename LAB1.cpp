#include <iostream>
void swap(int* a, int* b) {
    int c = *a;
    *a = *b;
    *b = c;
}




void selectionsort( int a[], int n, ) { //a-ukazatel'na massiv, n- kol-vo elementov

    for (int i = 0; i < n - 1; i++) { // sohranyaem 1 element
        int min = i;
        for (int j = i + 1; j < n; j++) { // est' li min element
            if (a[j] < a[min])
                min = j;
        }
        swap(&a[min], &a[i]);
    }
    std::cout << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
}
void insertionsort(int a[], int n, ) { //a-ukazatel'na massiv, n- kol-vo elementov
    int k
    for (int i = 1; i < n; i++) { // cikl, ot vtorogo elementa pod indeksom 1 do samogo konca
         k = a[i]; //soxranyaem znachenie
        int j = i - 1;
        while (k < a[j] && j >= 0) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = k; //zapisivaem novoe znachenie
    }
    std::cout << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
}
void bubblesort(int a[], int n, ) { //a-ukazatel'na massiv, n- kol-vo elementov

    for (int i = 0; i < n; i++) { //1 cikl
        for (int j = 0; j < n - 1; j++) { //2 cikl, smotrim sosednie elementi
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
    std::cout << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
}






int main() {
    int a[100];
    int n; 
    std::cout << "Napichite nomer chisla v massive";
    std::cin >> n;
    std::cout << "Napichite massiv";
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::cout << "Viberite sort. 1). Bubble sort. 2).Select Sort. 3).Insert Sort";
    int k;
    std::cin >> k;
    switch (k) {
    case 1:
        selectionsort(n, a); 
        break;
    case 2:
        insertionsort(n, a); 
        break;
    case 3:
        bubblesort(n, a); 
    }

}