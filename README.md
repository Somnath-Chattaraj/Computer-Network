# Network Commands

Created: January 19, 2025 9:18 PM

### **ifconfig**

- **Definition**: Displays or configures a network interface.
- **Example**: `ifconfig eth0 up` - Activates the `eth0` network interface.

### **traceroute**

- **Definition**: Traces the route packets take to a network host.
- **Example**: `traceroute google.com`

### **ping**

- **Definition**: Sends ICMP echo requests to test connectivity and measure latency.
- **Example**: `ping 8.8.8.8`

### **dig**

- **Definition**: Queries DNS servers for information about host addresses, MX records, etc.
- **Example**: `dig example.com`

### **telnet**

- **Definition**: Connects to another host over a network using the Telnet protocol.
- **Example**: `telnet mail.example.com 25`

### **nslookup**

- **Definition**: Queries DNS for domain name or IP address information.
- **Example**: `nslookup example.com`

### **netstat**

- **Definition**: Displays network connections, routing tables, and interface statistics.
- **Example**: `netstat -an`

### **scp**

- **Definition**: Securely copies files between hosts using SSH.
- **Example**: `scp file.txt user@remote:/path/to/destination`

### **w**

- **Definition**: Displays logged-in users and what they are doing.
- **Example**: `w`

### **nmap**

- **Definition**: Scans networks for open ports and services.
- **Example**: `nmap -sS 192.168.1.1`

### **ifup/ifdown**

- **Definition**: Activates (`ifup`) or deactivates (`ifdown`) a network interface.
- **Example**: `ifup eth0`

### **route**

- **Definition**: Displays or modifies the routing table.
- **Example**: `route add default gw 192.168.1.1`

### **host**

- **Definition**: Performs DNS lookups for IP or domain names.
- **Example**: `host example.com`

### **arp**

- **Definition**: Displays or modifies the ARP table.
- **Example**: `arp -a`

### **ethtool**

- **Definition**: Displays or modifies Ethernet device settings.
- **Example**: `ethtool eth0`

### **iwconfig**

- **Definition**: Configures wireless network interfaces.
- **Example**: `iwconfig wlan0 essid "NetworkName"`

### **system-config-network**

- **Definition**: A tool to configure network settings (graphical or CLI).
- **Example**: `system-config-network` (Runs the configuration tool.)

### **bmon**

- **Definition**: Bandwidth monitor and visualizer.
- **Example**: `bmon`

### **ssh**

- **Definition**: Securely connects to a remote machine.
- **Example**: `ssh user@remote_host`

### **tcpdump**

- **Definition**: Captures and analyzes network traffic.
- **Example**: `tcpdump -i eth0`

### **dstat**

- **Definition**: Displays system resource usage in real time.
- **Example**: `dstat`

### **dhclient**

- **Definition**: Obtains an IP address from a DHCP server.
- **Example**: `dhclient eth0`

### **nload**

- **Definition**: Displays real-time network usage.
- **Example**: `nload`

### **iftop**

- **Definition**: Displays bandwidth usage by active connections.
- **Example**: `iftop -i eth0`

### **ip**

- **Definition**: Displays/manages network interfaces and routing.
- **Example**: `ip addr`

### **iptables**

- **Definition**: Configures rules for the Linux firewall.
- **Example**: `iptables -A INPUT -p tcp --dport 22 -j ACCEPT`

### **sftp**

- **Definition**: Transfers files securely using SSH.
- **Example**: `sftp user@remote_host`

### **socat**

- **Definition**: Bidirectional data transfer between two points.
- **Example**: `socat TCP4-LISTEN:1234,fork EXEC:/bin/bash`

### **rsync**

- **Definition**: Synchronizes files and directories between hosts.
- **Example**: `rsync -avz /src/ user@remote:/dest/`

### **wget**

- **Definition**: Downloads files from the web via HTTP, HTTPS, or FTP.
- **Example**: `wget https://example.com/file.zip`

### **curl**

- **Definition**: Transfers data from or to a server using various protocols.
- **Example**: `curl -O https://example.com/file.zip`