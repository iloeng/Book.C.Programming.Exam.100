/*
 *
 *-----------------------------------------------------------------------------
 * @Name：    012.h
 * @Desc:     
 * @Author:   liangz.org@gmail.com
 * @Create:   2020.07.01   9:23
 *-----------------------------------------------------------------------------
 * @Change:   2020.07.01
 *-----------------------------------------------------------------------------
*/

/*
 * 12.抓交通肇事犯
 * 一辆卡车违反交通规则，撞人后逃跑。现场有3人目击事件。但都没有记住车牌，只记住了车
 * 好的一些特征。甲说：牌照的前两位数字是相通的；乙说：牌照的后两位数字是相同的，但与
 * 前两位不同；丙是位数学家，他说：四位的车号刚好是一个整数的平方。请根据以上线索求出
 * 车号
 */


#include <stdio.h>

int main() {
    int i, j, k, c;
    for (i = 1; i <= 9; i++) {
        for (j = 0; j <= 9; j++) {
            if (i != j) {
                k = i * 1000 + i * 100 + j * 10 + j;
                for (c = 31; c * c < k; c++);
                if (c * c == k) {
                    printf("Lorry-No. is %d.\n", k);
                }

            }
        }
    }
}

