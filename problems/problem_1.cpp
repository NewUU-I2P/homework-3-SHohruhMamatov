void problemSolution1(float consumed_water) {
   double cost = 13.0; // Fixed amount
    double remaining = consumption;

    // Calculate cost for the first 30 cubic metres
    if (remaining >= 30.0) {
        double cost1 = 30.0 * 0.4;
        cost += cost1;
        remaining -= 30.0;
    } else {
        double cost1 = remaining * 0.4; // Partially covered first tier
        cost += cost1;
        remaining = 0.0;
    }

   
    if (remaining >= 20.0) {
        double cost2 = 20.0 * 0.12;
        cost += cost2;
        remaining -= 20.0;
    } else {
        double cost2 = remaining * 0.12; // Partially covered second tier
        cost += cost2;
        remaining = 0.0;
    }

    
    if (remaining >= 10.0) {
        double cost3 = 10.0 * 1.4;
        cost += cost3;
        remaining -= 10.0;
    } else {
        double cost3 = remaining * 1.4; // Partially covered third tier
        cost += cost3;
        remaining = 0.0;
    }

    // Calculate cost for any additional cubic metres
    double cost4 = remaining * 1.5;
    cost += cost4;

    return cost;
}
}
