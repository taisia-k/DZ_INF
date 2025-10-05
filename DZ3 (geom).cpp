//1
/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    float s = 0.5 * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    cout << s;
    return 0;
}




//2
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int n = 4;
    float x[n], y[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    float p= 0;
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        p += sqrt(pow(x[j] - x[i], 2) + pow(y[j] - y[i], 2));
    }
    cout << p;
    return 0;
}





//3
#include <iostream>
using namespace std;

int main() {
    float x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    float cx = (x1 + x2 + x3) / 3;
    float cy = (y1 + y2 + y3) / 3;
    cout << "(" << cx << ", " << cy << ")";
    return 0;
}





//4
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x1, y1, x3, y3;
    cin >> x1 >> y1 >> x3 >> y3;
    float d = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    cout << d;
    return 0;
}





//5
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    float x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    float a = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
    if (fabs(a) == 0)
        cout << "на одной прямой";
    else
        cout << "не на одной прямой";
    return 0;
}





//6
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    float x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    if (((x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1)) * ((x2 - x1) * (y4 - y1) - (y2 - y1) * (x4 - x1)) < 0 &&
        ((x4 - x3) * (y1 - y3) - (y4 - y3) * (x1 - x3)) * ((x4 - x3) * (y2 - y3) - (y4 - y3) * (x2 - x3)) < 0) {
        cout << "пересекаются";
        {
    else
        cout << "не пересекаются";

    return 0;
}





//7
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    const int mx = 999;
    int n, x, y;
    cin >> n;
    int px[mx], py[mx];
    for(int i=0;i<n;i++) cin >> px[i] >> py[i];
    cin >> x >> y;
    int c = 0;
    for(int i=0;i<n;i++){
        int j = (i+1)%n;
        int x1=px[i], y1=py[i], x2=px[j], y2=py[j];
        if(y1>y2){ swap(y1,y2); swap(x1,x2); }
        if(y == y1 || y == y2) y += 1;
        if(y>y1 && y<y2){
            double xi = x1 + (double)(x2-x1)*(y-y1)/(y2-y1);
            if(xi > x) c++;
        }
    }
    if(c%2==1)
        cout << "внутри";
    else
        cout << "снаружи";
    return 0;
}





//8
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << d;
    return 0;
}
*/




//9
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    const int mx1 = 999;
    const int mx2 = 999;
    int n1, n2;
    cin >> n1;
    int x1[mx1], y1[mx1];
    for (int i = 0;i < n1;i++) cin >> x1[i] >> y1[i];
    cin >> n2;
    int x2[mx2], y2[mx2];
    for (int i = 0;i < n2;i++) cin >> x2[i] >> y2[i];
    bool intersect = false;
    for (int i = 0;i < n1 && !intersect;i++) {
        int j = (i + 1) % n1;
        for (int k = 0;k < n2 && !intersect;k++) {
            int l = (k + 1) % n2;
            int o1 = (y1[j] - y1[i]) * (x2[k] - x1[j]) - (x1[j] - x1[i]) * (y2[k] - y1[j]);
            int o2 = (y1[j] - y1[i]) * (x2[l] - x1[j]) - (x1[j] - x1[i]) * (y2[l] - y1[j]);
            int o3 = (y2[l] - y2[k]) * (x1[i] - x2[l]) - (x2[l] - x2[k]) * (y1[i] - y2[l]);
            int o4 = (y2[l] - y2[k]) * (x1[j] - x2[l]) - (x2[l] - x2[k]) * (y1[j] - y2[l]);

            if (o1 * o2 < 0 && o3 * o4 < 0) intersect = true;
        }
    }
    if (intersect)
        cout << "пересекаются";
    else
        cout << "не пересекаются";
    return 0;
}
