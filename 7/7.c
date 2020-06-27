#include <stdio.h>
int main() 
{
    int Year, Month, Date;
    int Leapyear, Datevalid, Februaryvalid, Month30valid, Month31valid;
    scanf("%d-%d-%d", &Year, &Month, &Date);

    Leapyear = (Year % 100 != 0 && Year % 4 == 0) || Year % 400 == 0 ? 1 : 0;
    // 1:leap year  0:not leap year
    Februaryvalid = (Leapyear == 0 && Month == 2 && Date < 29 && Date >= 1) ||
                    (Leapyear == 1 && Month == 2 && Date < 30 && Date >= 1);
    Month30valid = (Month == 4 || Month == 6 || Month == 9 || Month == 11) &&
                   Date < 31 && Date >= 1;
    Month31valid = (Month == 1 || Month == 3 || Month == 5 || Month == 7 ||
                    Month == 8 || Month == 10 || Month == 12) &&
                   Date < 32 && Date >= 1;
    Datevalid = Februaryvalid || Month30valid || Month31valid;

    if (Datevalid == 1) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}