/*

//1

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int c;
    cin >> c;
    int m = c / 100;
    int cm = c % 100;
    cout << m << " метров " << cm << " сантиметров";
}





//2
#include <iostream>
using namespace std;

int main() {
    float a, b;
    cin >> a >> b;
    cout << a * b;
}




//3
#include <iostream>
using namespace std;

int main() {
    float c, f;
    cin >> c;
    f = c * 9.0 / 5.0 + 32.0;
    cout << f;
}




//4
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << "четное" << endl;
    }
    else {
        cout << "нечетное" << endl;
    }
}





//5
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int n;
    cin >> n;
    if (n % 3 == 0 && n % 5 == 0) {
        cout << "делится на 3 и 5";
    }
    else if (n % 3 == 0) {
        cout << "делится на 3";
    }
    else if (n % 5 == 0) {
        cout << "делится на 5";
    }
    else {
        cout << "не делится на 3 или 5";
    }
}





//6
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int a;
    cin >> a;
    if (a < 18) {
    cout << "меньше 18";
    }
    else if (a <= 60) {
    cout << "от 18 до 60";
    }
    else {
    cout << "больше 60";
    }
}





//7
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i * i << " ";
    }
}



//8
#include <iostream>
using namespace std;

int main() {
    string s;
    int c = 0;
    cin >> s;
    for (char x : s) {
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') c++;
    }
    cout << c;
}




//9
#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    cout << sum;
}




//10
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int n;
    cin >> n;
    if (n > 0) {
        cout << "положительное";
    }
    else if (n < 0) {
        cout << "отрицательное";
    }
    else {
        cout << "ноль";
    }
}
*/




//11
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    for (int i = 32; i <= 126; i++) {
        cout << i << " " << char(i) << endl;
    }
}