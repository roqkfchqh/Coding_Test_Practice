#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool can_transport(long long mid, int a, int b, int g[], int s[], int w[], int t[], size_t t_len) {
    long long total_gold = 0, total_silver = 0, total_weight = 0;

    for(int i = 0; i < t_len; i++){
        long long max_trips = mid / (2 * t[i]);
        if(mid >= t[i] * (2 * max_trips + 1)) max_trips++;
        long long max_transport = max_trips * w[i];
        
        long long available_gold = (g[i] < max_transport) ? g[i] : max_transport;
        long long available_silver = (s[i] < max_transport) ? s[i] : max_transport;
        long long available_combined = (g[i] + s[i] < max_transport) ? g[i] + s[i] : max_transport;

        total_gold += available_gold;
        total_silver += available_silver;
        total_weight += available_combined;
    }

    return (total_gold >= a) && (total_silver >= b) && (total_weight >= a + b);
}

long long solution(int a, int b, int g[], size_t g_len, int s[], size_t s_len, int w[], size_t w_len, int t[], size_t t_len) {
    long long low = 0;
    long long high = 1e15;
    long long answer = high;

    while(low <= high){
        long long mid = (low + high) / 2;
        if(can_transport(mid, a, b, g, s, w, t, t_len)){
            answer = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return answer;
}