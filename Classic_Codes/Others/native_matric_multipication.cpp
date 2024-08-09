# include <iostream>
# include <vector>
using namespace std ;
vector<vector <int>> square_matrix(vector<vector<int>> A , vector <vector<int>> B){
	int n = A.size();
	vector <vector <int >> C = A;
	for (int i = 0 ; i < n ; i++){
		for (int j = 0; j < n ; j++){
			C[i][j] = 0 ;
			for (int k = 0 ; k < n;k++){
				C[i][j] += A[i][k] * B[k][j] ;
			}
		}
	}
	return C  ;
} 
int main(){
	vector<vector<int>> A = {{1,2},{3,4}};
	vector<vector<int>> B = {{2,4},{3,5}};
	vector <vector<int>> sa = square_matrix(A,B) ;
	// cout << sa
	for (int i = 0 ; i < sa.size() ; i++){
		for (int j = 0; j < sa.size(); j++){
			cout << sa[i][j] << ' ';;
		}
		cout << '\n' ;
	}
	return 0;
}

































































Starting Nmap 7.93 ( https://nmap.org ) at 2024-03-24 14:31 PKT
Nmap scan report for 10.1.12.11
Host is up (0.32s latency).
MAC Address: F0:74:8D:F8:A5:93 (Unknown)
Nmap scan report for 10.1.12.12
Host is up (0.17s latency).
MAC Address: F0:74:8D:F8:A6:1B (Unknown)
Nmap scan report for 10.1.12.13
Host is up (0.015s latency).
MAC Address: F0:74:8D:F8:A5:47 (Unknown)
Nmap scan report for 10.1.12.14
Host is up (0.011s latency).
MAC Address: F0:74:8D:F8:A4:7F (Unknown)
Nmap scan report for 10.1.12.15
Host is up (0.38s latency).
MAC Address: 34:7D:F6:F3:10:D8 (Intel Corporate)
Nmap scan report for 10.1.12.17
Host is up (0.38s latency).
MAC Address: A0:E7:0B:04:97:2D (Intel Corporate)
Nmap scan report for 10.1.12.18
Host is up (0.35s latency).
MAC Address: 0C:DD:24:BF:78:D1 (Intel Corporate)
Nmap scan report for 10.1.12.19
Host is up (0.38s latency).
MAC Address: 00:45:E2:4C:F0:5B (CyberTAN Technology)
Nmap scan report for 10.1.12.20
Host is up (0.38s latency).
MAC Address: 2C:DB:07:B7:18:2B (Intel Corporate)
Nmap scan report for 10.1.12.21
Host is up (0.42s latency).
MAC Address: EC:63:D7:F9:64:42 (Intel Corporate)
Nmap scan report for 10.1.12.22
Host is up (0.35s latency).
MAC Address: 04:ED:33:71:E5:62 (Intel Corporate)
Nmap scan report for 10.1.12.24
Host is up (0.16s latency).
MAC Address: D4:6E:0E:0F:64:09 (Tp-link Technologies)
Nmap scan report for 10.1.12.25
Host is up (0.27s latency).
MAC Address: 18:26:49:53:9B:39 (Intel Corporate)
Nmap scan report for 10.1.12.26
Host is up (0.36s latency).
MAC Address: A0:E7:0B:04:96:8D (Intel Corporate)
Nmap scan report for 10.1.12.27
Host is up (0.33s latency).
MAC Address: 04:ED:33:72:C7:CA (Intel Corporate)
Nmap scan report for 10.1.12.29
Host is up (0.33s latency).
MAC Address: 18:26:49:23:DB:C4 (Intel Corporate)
Nmap scan report for 10.1.12.30
Host is up (0.36s latency).
MAC Address: 30:45:96:ED:2F:CF (Huawei Technologies)
Nmap scan report for 10.1.12.32
Host is up (0.33s latency).
MAC Address: 4E:1A:BC:6B:A1:DA (Unknown)
Nmap scan report for 10.1.12.33
Host is up (0.35s latency).
MAC Address: D4:54:8B:06:25:0C (Intel Corporate)
Nmap scan report for 10.1.12.34
Host is up (0.33s latency).
MAC Address: 04:ED:33:70:0B:7A (Intel Corporate)
Nmap scan report for 10.1.12.36
Host is up (0.37s latency).
MAC Address: 2C:DB:07:B5:81:73 (Intel Corporate)
Nmap scan report for 10.1.12.38
Host is up (0.15s latency).
MAC Address: A0:E7:0B:04:97:28 (Intel Corporate)
Nmap scan report for 10.1.12.41
Host is up (0.21s latency).
MAC Address: 2C:DB:07:B8:DC:65 (Intel Corporate)
Nmap scan report for 10.1.12.44
Host is up (0.11s latency).
MAC Address: 7E:63:E7:A7:F2:52 (Unknown)
Nmap scan report for 10.1.12.45
Host is up (0.12s latency).
MAC Address: 88:5A:06:41:A4:B9 (Guangdong Oppo Mobile Telecommunications)
Nmap scan report for 10.1.12.46
Host is up (0.21s latency).
MAC Address: 18:E7:77:99:20:91 (vivo Mobile Communication)
Nmap scan report for 10.1.12.51
Host is up (0.32s latency).
MAC Address: 28:B2:BD:A6:0B:DF (Intel Corporate)
Nmap scan report for 10.1.12.89
Host is up (0.28s latency).
MAC Address: 18:26:49:53:69:C5 (Intel Corporate)
Nmap scan report for 10.1.12.138
Host is up (1.5s latency).
MAC Address: A8:64:F1:F7:65:48 (Intel Corporate)
Nmap scan report for 10.1.12.143
Host is up (0.098s latency).
MAC Address: E0:2B:E9:A7:9D:7E (Intel Corporate)
Nmap scan report for 10.1.12.147
Host is up (0.16s latency).
MAC Address: 2C:DB:07:DA:5D:95 (Intel Corporate)
Nmap scan report for 10.1.12.149
Host is up (0.090s latency).
MAC Address: E0:2B:E9:3F:1D:21 (Intel Corporate)
Nmap scan report for 10.1.12.154
Host is up (1.7s latency).
MAC Address: A8:64:F1:F7:5E:A4 (Intel Corporate)
Nmap scan report for 10.1.12.187
Host is up (0.33s latency).
MAC Address: 38:87:D5:7C:4C:50 (Intel Corporate)
Nmap scan report for 10.1.12.193
Host is up (0.33s latency).
MAC Address: 2C:DB:07:B7:1C:0E (Intel Corporate)
Nmap scan report for 10.1.12.195
Host is up (0.35s latency).
MAC Address: E0:2B:E9:57:1B:C4 (Intel Corporate)
Nmap scan report for 10.1.12.199
Host is up (1.0s latency).
MAC Address: 38:87:D5:F1:5F:D6 (Intel Corporate)
Nmap done: 256 IP addresses (40 hosts up) scanned in 23.36 seconds


Starting Nmap 7.93 ( https://nmap.org ) at 2024-04-04 09:38 PKT
Nmap scan report for 10.1.12.11
Host is up (0.081s latency).
MAC Address: 2C:DB:07:B8:DB:16 (Intel Corporate)
Nmap scan report for 10.1.12.14
Host is up (0.27s latency).
MAC Address: F0:74:8D:F8:A4:67 (Unknown)
Nmap scan report for 10.1.12.15
Host is up (0.27s latency).
MAC Address: F0:74:8D:F8:A6:1B (Unknown)
Nmap scan report for 10.1.12.18
Host is up (0.27s latency).
MAC Address: F0:74:8D:F8:A5:47 (Unknown)
Nmap scan report for 10.1.12.19
Host is up (0.17s latency).
MAC Address: 2C:DB:07:B8:33:D2 (Intel Corporate)
Nmap scan report for 10.1.12.21
Host is up (0.27s latency).
MAC Address: F0:74:8D:F8:A4:7F (Unknown)
Nmap scan report for 10.1.12.28
Host is up (0.25s latency).
MAC Address: 2C:DB:07:B8:DC:65 (Intel Corporate)
Nmap scan report for 10.1.12.34
Host is up (0.26s latency).
MAC Address: A0:E7:0B:04:97:2D (Intel Corporate)
Nmap scan report for 10.1.12.37
Host is up (0.12s latency).
MAC Address: 2C:DB:07:B5:E7:FD (Intel Corporate)
Nmap scan report for 10.1.12.42
Host is up (0.34s latency).
MAC Address: F0:74:8D:F8:A5:93 (Unknown)
Nmap scan report for 10.1.12.44
Host is up (0.41s latency).
MAC Address: 00:45:E2:4C:F0:5B (CyberTAN Technology)
Nmap scan report for 10.1.12.46
Host is up (0.43s latency).
MAC Address: CA:BD:BB:AD:63:AB (Unknown)
Nmap scan report for 10.1.12.49
Host is up (0.41s latency).
MAC Address: 18:26:49:24:08:E2 (Intel Corporate)
Nmap scan report for 10.1.12.53
Host is up (0.37s latency).
MAC Address: 98:F6:21:83:EE:AA (Xiaomi Communications)
Nmap scan report for 10.1.12.55
Host is up (0.39s latency).
MAC Address: D4:6E:0E:0F:64:09 (Tp-link Technologies)
Nmap scan report for 10.1.12.58
Host is up (0.40s latency).
MAC Address: A0:A4:C5:D4:F6:11 (Intel Corporate)
Nmap scan report for 10.1.12.59
Host is up (0.41s latency).
MAC Address: 6A:38:B5:C1:39:29 (Unknown)
Nmap scan report for 10.1.12.60
Host is up (1.6s latency).
MAC Address: D4:54:8B:04:9F:07 (Intel Corporate)
Nmap scan report for 10.1.12.63
Host is up (0.39s latency).
MAC Address: 28:B2:BD:A6:0B:DF (Intel Corporate)
Nmap scan report for 10.1.12.71
Host is up (0.39s latency).
MAC Address: 32:B4:E5:18:92:FE (Unknown)
Nmap scan report for 10.1.12.72
Host is up (0.39s latency).
MAC Address: 2C:DB:07:D8:A2:A2 (Intel Corporate)
Nmap scan report for 10.1.12.73
Host is up (0.48s latency).
MAC Address: 34:7D:F6:F3:10:24 (Intel Corporate)
Nmap scan report for 10.1.12.80
Host is up (0.46s latency).
MAC Address: 4E:1A:BC:6B:A1:DA (Unknown)
Nmap scan report for 10.1.12.82
Host is up (0.38s latency).
MAC Address: 18:26:49:23:6C:DE (Intel Corporate)
Nmap scan report for 10.1.12.83
Host is up (0.14s latency).
MAC Address: AA:C9:D1:7E:E2:A6 (Unknown)
Nmap scan report for 10.1.12.88
Host is up (0.22s latency).
MAC Address: 2C:DB:07:D8:A3:10 (Intel Corporate)
Nmap scan report for 10.1.12.91
Host is up (0.28s latency).
MAC Address: 18:26:49:21:A5:2F (Intel Corporate)
Nmap scan report for 10.1.12.92
Host is up (0.070s latency).
MAC Address: 94:E6:F7:54:42:F0 (Intel Corporate)
Nmap scan report for 10.1.12.93
Host is up (0.14s latency).
MAC Address: 9A:44:14:63:48:86 (Unknown)
Nmap scan report for 10.1.12.95
Host is up (0.19s latency).
MAC Address: 10:89:FB:E1:D3:04 (Samsung Electronics)
Nmap scan report for 10.1.12.96
Host is up.
MAC Address: D4:54:8B:06:7C:DC (Intel Corporate)
Nmap scan report for 10.1.12.97
Host is up (0.28s latency).
MAC Address: 18:26:49:21:C1:77 (Intel Corporate)
Nmap scan report for 10.1.12.99
Host is up (0.26s latency).
MAC Address: 2C:DB:07:D8:A1:67 (Intel Corporate)
Nmap scan report for 10.1.12.100
Host is up (0.14s latency).
MAC Address: 18:26:49:21:86:80 (Intel Corporate)
Nmap scan report for 10.1.12.101
Host is up (0.13s latency).
MAC Address: 18:26:49:24:56:CB (Intel Corporate)
Nmap scan report for 10.1.12.102
Host is up (0.20s latency).
MAC Address: 22:42:46:9C:54:8F (Unknown)
Nmap scan report for 10.1.12.103
Host is up (0.39s latency).
MAC Address: 2C:DB:07:DA:58:D1 (Intel Corporate)
Nmap scan report for 10.1.12.105
Host is up (0.14s latency).
MAC Address: 2C:DB:07:DA:5D:95 (Intel Corporate)
Nmap scan report for 10.1.12.106
Host is up (0.16s latency).
MAC Address: 18:26:49:23:88:A9 (Intel Corporate)
Nmap scan report for 10.1.12.108
Host is up (0.17s latency).
MAC Address: 18:26:49:53:5B:65 (Intel Corporate)
Nmap scan report for 10.1.12.110
Host is up (0.20s latency).
MAC Address: 18:26:49:53:35:D1 (Intel Corporate)
Nmap scan report for 10.1.12.111
Host is up (0.11s latency).
MAC Address: 1E:65:9B:3C:30:62 (Unknown)
Nmap scan report for 10.1.12.113
Host is up (0.065s latency).
MAC Address: 2C:DB:07:B8:31:B6 (Intel Corporate)
Nmap scan report for 10.1.12.116
Host is up (0.092s latency).
MAC Address: 18:26:49:21:8D:F6 (Intel Corporate)
Nmap scan report for 10.1.12.117
Host is up (0.099s latency).
MAC Address: DC:89:83:81:D1:3D (Samsung Electronics)
Nmap scan report for 10.1.12.119
Host is up (0.077s latency).
MAC Address: E0:2B:E9:47:2A:25 (Intel Corporate)
Nmap scan report for 10.1.12.120
Host is up (0.065s latency).
MAC Address: 2C:DB:07:B8:3E:4F (Intel Corporate)
Nmap scan report for 10.1.12.121
Host is up (0.11s latency).
MAC Address: 2C:DB:07:D8:A2:2F (Intel Corporate)
Nmap scan report for 10.1.12.123
Host is up (0.068s latency).
MAC Address: 2C:DB:07:B7:18:2B (Intel Corporate)
Nmap scan report for 10.1.12.124
Host is up (0.18s latency).
MAC Address: 2C:DB:07:B6:00:F3 (Intel Corporate)
Nmap scan report for 10.1.12.125
Host is up (0.058s latency).
MAC Address: A0:E7:0B:04:97:6E (Intel Corporate)
Nmap scan report for 10.1.12.126
Host is up (0.12s latency).
MAC Address: A8:64:F1:C3:49:1B (Intel Corporate)
Nmap scan report for 10.1.12.131
Host is up (0.19s latency).
MAC Address: 2C:DB:07:B8:E3:F4 (Intel Corporate)
Nmap scan report for 10.1.12.132
Host is up (0.079s latency).
MAC Address: A0:E7:0B:04:96:9C (Intel Corporate)
Nmap scan report for 10.1.12.134
Host is up (0.20s latency).
MAC Address: 2C:DB:07:B7:18:80 (Intel Corporate)
Nmap scan report for 10.1.12.135
Host is up (0.069s latency).
MAC Address: 88:5A:06:41:A4:B9 (Guangdong Oppo Mobile Telecommunications)
Nmap scan report for 10.1.12.140
Host is up (0.0051s latency).
MAC Address: 14:FE:B5:ED:FF:8A (Dell)
Nmap scan report for 10.1.12.141
Host is up (0.21s latency).
MAC Address: 34:CF:F6:33:56:94 (Intel Corporate)
Nmap scan report for 10.1.12.143
Host is up (0.20s latency).
MAC Address: E0:2B:E9:A7:9D:7E (Intel Corporate)
Nmap scan report for 10.1.12.148
Host is up (0.26s latency).
MAC Address: 18:26:49:24:56:A3 (Intel Corporate)
Nmap scan report for 10.1.12.151
Host is up (0.27s latency).
MAC Address: 2C:DB:07:DA:5D:C7 (Intel Corporate)
Nmap scan report for 10.1.12.152
Host is up (0.20s latency).
MAC Address: 2C:DB:07:D8:A2:E8 (Intel Corporate)
Nmap scan report for 10.1.12.154
Host is up (0.099s latency).
MAC Address: A8:64:F1:F7:5E:A4 (Intel Corporate)
Nmap scan report for 10.1.12.155
Host is up (0.068s latency).
MAC Address: A8:64:F1:F7:65:48 (Intel Corporate)
Nmap scan report for 10.1.12.156
Host is up (0.19s latency).
MAC Address: 00:45:E2:4C:FB:D5 (CyberTAN Technology)
Nmap scan report for 10.1.12.160
Host is up (0.028s latency).
MAC Address: D4:54:8B:05:E3:85 (Intel Corporate)
Nmap scan report for 10.1.12.162
Host is up (0.27s latency).
MAC Address: 2C:DB:07:D8:A1:C6 (Intel Corporate)
Nmap scan report for 10.1.12.163
Host is up (0.28s latency).
MAC Address: 18:26:49:21:95:35 (Intel Corporate)
Nmap scan report for 10.1.12.165
Host is up (0.062s latency).
MAC Address: 38:87:D5:F1:F2:34 (Intel Corporate)
Nmap scan report for 10.1.12.166
Host is up (0.062s latency).
MAC Address: E0:2B:E9:3F:1D:21 (Intel Corporate)
Nmap scan report for 10.1.12.168
Host is up (0.084s latency).
MAC Address: 2C:DB:07:DA:92:42 (Intel Corporate)
Nmap scan report for 10.1.12.178
Host is up (0.16s latency).
MAC Address: 18:26:49:23:97:40 (Intel Corporate)
Nmap scan report for 10.1.12.191
Host is up (0.056s latency).
MAC Address: 38:87:D5:F1:5E:8C (Intel Corporate)
Nmap scan report for 10.1.12.195
Host is up (0.059s latency).
MAC Address: E0:2B:E9:57:1B:C4 (Intel Corporate)
Nmap scan report for 10.1.12.199
Host is up (0.18s latency).
MAC Address: 38:87:D5:F1:5F:D6 (Intel Corporate)
Nmap scan report for _gateway (10.1.12.253)
Host is up (0.028s latency).
MAC Address: D4:76:A0:6C:24:CF (Fortinet)
Nmap scan report for 10.1.12.254
Host is up (0.014s latency).
MAC Address: AC:F2:C5:74:AE:42 (Cisco Systems)
Nmap scan report for 5005-82c5 (10.1.12.77)
Host is up.
Nmap done: 256 IP addresses (78 hosts up) scanned in 16.75 seconds

MAC Address: A0:E7:0B:04:97:28 (Intel Corporate) saram
MAC Address: D4:54:8B:05:E3:85 (Intel Corporate) s-s ullah
MAC Address: CA:BD:BB:AD:63:AB  mj use ka
MAC Address: 2C:DB:07:D8:A1:67 (Intel Corporate) mueed
MAC Address: 98:F6:21:83:EE:AA (Xiaomi Communications)  Android-2.local
Nmap scan report for 10.1.12.83
Host is up (0.017s latency).

MAC Address: DC:B7:2E:57:5F:18 (Xiaomi Communications) 
Nmap scan report for 10.1.12.110
Host is up (0.11s latency).

MAC Address: 2C:DB:07:B7:16:B9 (Intel Corporate)  fasih-ur-rehman.local
Nmap scan report for 10.1.12.179
Host is up (0.077s latency).

Nmap scan report for 10.1.12.154
Host is up (0.33s latency).
MAC Address: A8:64:F1:F7:5E:A4 (Intel Corporate) shah

Nmap scan report for 10.1.12.143
Host is up (0.20s latency).
MAC Address: E0:2B:E9:A7:9D:7E (Intel Corporate) shuja-Lenovo-V15-G1-IML.local

Nmap scan report for 10.1.12.92
Host is up (0.070s latency).
MAC Address: 94:E6:F7:54:42:F0 (Intel Corporate) z-s elite book
     
10.1.12.22 dev wlp1s0 lladdr 04:ed:33:71:e5:62 STALE 
10.1.12.195 dev wlp1s0 lladdr e0:2b:e9:57:1b:c4 STALE 
10.1.12.143 dev wlp1s0 lladdr e0:2b:e9:a7:9d:7e STALE 
10.1.12.36 dev wlp1s0 lladdr 2c:db:07:b5:81:73 STALE 
10.1.12.21 dev wlp1s0 lladdr ec:63:d7:f9:64:42 STALE 
10.1.12.89 dev wlp1s0 lladdr 18:26:49:53:69:c5 STALE 
10.1.12.20 dev wlp1s0 lladdr 2c:db:07:b7:18:2b STALE 
10.1.12.193 dev wlp1s0 lladdr 2c:db:07:b7:1c:0e STALE 
10.1.12.43 dev wlp1s0 lladdr 98:f6:21:83:ee:aa STALE 
10.1.12.147 dev wlp1s0 lladdr 2c:db:07:da:5d:95 STALE 
10.1.12.42 dev wlp1s0 lladdr 2c:db:07:b7:16:b9 STALE 
10.1.12.27 dev wlp1s0 lladdr 04:ed:33:72:c7:ca STALE 
10.1.12.199 dev wlp1s0 lladdr 38:87:d5:f1:5f:d6 STALE 
10.1.12.41 dev wlp1s0 lladdr 2c:db:07:b8:dc:65 STALE 
10.1.12.26 dev wlp1s0 lladdr a0:e7:0b:04:96:8d STALE 
10.1.12.11 dev wlp1s0 lladdr f0:74:8d:f8:a5:93 STALE 
10.1.12.40 dev wlp1s0 lladdr 04:ed:33:71:7c:7b STALE 
10.1.12.25 dev wlp1s0 lladdr 18:26:49:53:9b:39 STALE 
10.1.12.24 dev wlp1s0 lladdr d4:6e:0e:0f:64:09 STALE 
10.1.12.31 dev wlp1s0 lladdr 2c:db:07:d8:a2:e8 STALE 
10.1.12.30 dev wlp1s0 lladdr 30:45:96:ed:2f:cf STALE 
10.1.12.15 dev wlp1s0 lladdr 34:7d:f6:f3:10:d8 STALE 
10.1.12.149 dev wlp1s0 lladdr e0:2b:e9:3f:1d:21 STALE 
10.1.12.51 dev wlp1s0 lladdr 28:b2:bd:a6:0b:df STALE 
10.1.12.44 dev wlp1s0 lladdr 7e:63:e7:a7:f2:52 STALE 
10.1.12.29 dev wlp1s0 lladdr 18:26:49:23:db:c4 STALE 
10.1.12.14 dev wlp1s0 lladdr f0:74:8d:f8:a4:7f STALE 
10.1.12.187 dev wlp1s0 lladdr 38:87:d5:7c:4c:50 STALE 
10.1.12.13 dev wlp1s0 lladdr f0:74:8d:f8:a5:47 STALE 
10.1.12.254 dev wlp1s0 lladdr ac:f2:c5:74:ae:42 STALE 
10.1.12.34 dev wlp1s0 lladdr 04:ed:33:70:0b:7a STALE 
10.1.12.19 dev wlp1s0 lladdr 00:45:e2:4c:f0:5b STALE 
10.1.12.12 dev wlp1s0 lladdr f0:74:8d:f8:a6:1b STALE 
10.1.12.253 dev wlp1s0 lladdr d4:76:a0:6c:24:cf STALE 
10.1.12.33 dev wlp1s0 lladdr d4:54:8b:06:25:0c STALE 
10.1.12.18 dev wlp1s0 lladdr 0c:dd:24:bf:78:d1 STALE 
10.1.12.154 dev wlp1s0 lladdr a8:64:f1:f7:5e:a4 STALE 
10.1.12.70 dev wlp1s0 lladdr 38:87:d5:fd:18:21 STALE 
10.1.12.32 dev wlp1s0 lladdr 4e:1a:bc:6b:a1:da STALE 
10.1.12.17 dev wlp1s0 lladdr a0:e7:0b:04:97:2d STALE 
10.1.12.138 dev wlp1s0 lladdr a8:64:f1:f7:65:48 STALE 
10.1.12.39 dev wlp1s0 lladdr 0c:dd:24:b8:cf:13 STALE 



34:7D:F6:F3:10:D8    our ...
2C:DB:07:DA:5D:C7    intel....
10:89:FB:4D:F5:90    samsung...
2c:db:07:b5:e7:fd    gj/mstb...
ac:f2:c5:74:ae:42
04:ed:33:71:45:12 prh
F2:8C:C5:D4:D5:1E mm...
00:45:E2:4C:FB:D5 fsl..
00:0A:F5:CA:AD:0C  airgo
00:45:E2:4C:FB:D5












