#include <stdio.h>

int main(void) 
{
	int share_num;
	float price_per_share;
    float commission, value;
    float rival_commission;

    printf("Enter the number of shares, and the price per share: ");
    scanf("%d%f", &share_num, &price_per_share);

    value = share_num * price_per_share;

    if (value < 2500.00f) {
        commission = 30.00f + .017f * value;
    }else if (value < 6250.00f) {
        commission = 56.00f + .0066f * value;
    }else if (value < 20000.00f) {
        commission = 76.00f + .0034f * value;
    }else if (value < 50000.00f) {
        commission = 100.00f + .0022f * value;
    }else if (value < 500000.00f) {
        commission = 155.00f + .0011f * value;
    }else {
        commission = 255.00f + .0009f * value;;
    }

    if (commission < 39.00f) {
        commission = 39.00f;
    }

    //计算竞争对手的佣金数量
    if (share_num < 2000) {
    	rival_commission = 33.03f * share_num;
    }else {
    	rival_commission = 33.02 * share_num;
    }

    printf("The Commission of original broker：$%.2f\n", commission);
    printf("The Commission of rival broker: $%.2f\n", rival_commission);

    return 0;
}