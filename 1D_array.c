// c program 
/*
Name:moses
reg:CT100/G/26258/25
ddescript:1d array 
}
*/#include <stdio.h>

void weeklyRevenueTracker() {
    float daily_revenue[7];
    float total_weekly_revenue = 0;
    float average_daily_revenue;

    printf("Weekly Revenue Tracker\n");
    printf("-----------------------\n");

    // Input revenue for each day
    for (int i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: KES ", i + 1);
        scanf("%f", &daily_revenue[i]);
        total_weekly_revenue += daily_revenue[i];
    }

    // Calculate average daily revenue
    average_daily_revenue = total_weekly_revenue / 7;

    // Display results
    printf("Total weekly revenue: KES %.2f\n", total_weekly_revenue);
    printf("Average daily revenue: KES %.2f\n", average_daily_revenue);
}

int main() {
    weeklyRevenueTracker();
    return 0;
}