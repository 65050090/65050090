#include <stdio.h>

int main() {
    int number, sum = 0, count = 0;

    do {
        printf("ป้อนเลข (0 เพื่อจบการทำงาน): ");
        scanf("%d", &number);

        if (number > 0) {
            sum += number;
            count++;
        }
    } while (number != 0 && number > 0);

    if (count > 0) {
        float average = (float)sum / count;
        printf("ผลรวม: %d\n", sum);
        printf("ค่าเฉลี่ย: %.2f\n", average);
    } else {
        printf("ไม่มีข้อมูล\n");
    }

    return 0;
}
