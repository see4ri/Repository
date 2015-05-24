1. aaa.pcap
Sample SIP and RTP traffic. 

2. call-hold.pcap
Call Hold in SIP.

3. dns.pcap
DNS sample protocol.

4. dns-mudynamics.pcap
DNS sample protocol.

5. rtp_example.raw
A VoIP sample capture of a H323 call (including H225, H245, RTP and RTCP). 

6. rtps_cooked.pcapng
Manually generated RTPS traffic covering a range of submessages and parameters. 

7. RTSPPACKETS1.cap
Few RTSP packets in Microsoft Network Monitor format.

8. rtsp_with_data_over_tcp.cap
An RTSP reply packet. 

9. SIP_CALL_RTP_G711 
Sample SIP call with RTP in G711. 

10. sip_invite.pcap
SIP INVITE message.

11. sip_register.pcap
SIP REGISTER message.

12. sip_register_call.pcap
SIP CALL 

13. sip_sjphone_conf.pcap
SIP Conference  call.

14. sip-ack.pcap
SIP ACK message.

15. sip-bye.pcap
SIP BYE message.

16. sip-options.pcap
SIP OPTIONS message.

17. DNS Question & Answer.pcapng
DNS sample pcap log

18. atm_capture1.cap
A trace of ATM Classical IP packets.

19. ancp.pcap.gz
Access Node Control Protocol (ANCP).

20. bfd-raw-auth-simple.pcap
BFD packets using simple password authentication.

21. bfd-raw-auth-md5.pcap
BFD packets using md5 authentication.

22. bfd-raw-auth-sha1.pcap
BFD packets using SHA1 authentication. 

23. dhcp.pcap
A sample of DHCP traffic.

24. dhcp-and-dyndns.pcap.gz
A sample session of a host doing dhcp first and then dyndns. 

25. dhcp-auth.pcap.gz
A sample packet with dhcp authentication information. 

26. messenger.pcap
A few messenger example packets. 

27. toshiba.general.gz
Just some general usage of a Toshiba ISDN router. There are three link types in this trace: PPP, Ethernet, and LAPD.

28. unistim_phone_startup.pcap
Shows a phone booting up, requesting ip address and establishing connection with cs2k server. 

29. v6-http.cap
Shows IPv6 (SixXS) HTTP.

30. vlan.cap.gz
Lots of different protocols, all running over 802.1Q virtual lans. 

31. wpsdata.cap 
WPS expanded EAP trace.

32. rtmp_sample.tgz
RTMP (Real Time Messaging Protocol) trace. 

33. arp-storm.pcap
More than 20 ARP requests per second, observed on a cable modem connection. 

34. rarp_req_reply.pcap
RARP request and reply. 

35. stp.pcap
Spanning Tree Protocol

36. udp_lite_full_coverage_0.pcap
If coverage=0, the full packet is checksummed over. 

37. udp_lite_illegal_1-7.pcap
Coverage values between 1..7 (illegal).

38. udp_lite_normal_coverage_8-20.pcap
Normal ones with correct checksums (legal). 

39. http.cap
A simple HTTP request and response. 

40. http_gzip.cap
A simple HTTP request with a one packet gzip Content-Encoded response. 

41. http_with_jpegs.cap.gz
A simple capture containing a few JPEG pictures one can reassemble and save to a file. 

42. tcp-wireshark-file1.trace
A large POST request, taking many TCP segments. 

43. tcp-ecn-sample.pcap
Sample TCP/HTTP of a file transfer using ECN (Explicit Congestion Notification) feature per RFC3168. Frame 48 experienced Congestion Encountered. 

44. telnet-cooked.pcap
A telnet session in "cooked" (per-line) mode. 

45. telnet-raw.pcap
A telnet session in "raw" (per-character) mode. 

46. tftp_rrq.pcap
A TFTP Read Request. 

47. tftp_wrq.pcap
A TFTP Write Request.

48. bgp.pcap.gz
BGP packets, including AS path attributes. 

49. bmp.pcap
BGP Monitoring Protocol, including Init, Peer Up, Route Monitoring

50. EIGRP_Neighbors.cap
Two Cisco EIGRP peers forming an adjacency.

51. eigrp-for-ipv6-auth.pcap
Cisco EIGRP packets, including Authentication TLVs

52. eigrp-for-ipv6-stub.pcap
Cisco EIGRP packets, including Stub routing TLVs 

53. eigrp-for-ipv6-updates.pcap
Cisco EIGRP packets, including IPv6 internal and external route updates

54. eigrp-ipx.pcap
Cisco EIGRP packets, including IPX internal and external route updates 

55. ipv6-ripng.gz
RIPng packets (IPv6) 

56. ospf.cap
Simple OSPF initialization. 

57. ospf-md5.cap
Simple OSPF-MD5 Authentication. 

58. RIP_v1
A basic route exchange between two RIP v1 routers. 

59. b6300a.cap
A collection of SNMP GETs and RESPONSEs

60. snmp_usm.pcap
A series of authenticated and some encrypted SNMPv3 PDUS
the authPassword for all users is pippoxxx and the privPassword is PIPPOxxx.
    pippo uses MD5 and DES
    pippo2 uses SHA1 and DES
    pippo3 uses SHA1 and AES
    pippo4 uses MD5 and AES 

61. NTP_sync.pcap
After reading about the round robin DNS records set up by the folks at pool.ntp.org, I decided to use their service to sync my laptop's clock. The attached file contains the result of running

    net time /setsntp:us.pool.ntp.org
    net stop w32time
    net start w32time 

at the command prompt. Something to note is that each pool.ntp.org DNS record contains multiple addresses. The Windows time client appears to query all of them. 

62. sctp.cap
Sample SCTP PDUs, Megaco. 

63. sctp-test.cap
Sample SCTP handshaking and DATA/SACK chunks. 

64. sctp-addip.cap
Sample SCTP ASCONF/ASCONF-ACK Chunks that perform Vertical Handover. 

65. sctp-www.cap
Sample SCTP DATA Chunks that carry HTTP messages between Apache2 HTTP Server and Mozilla. 

66. SIP_DTMF2.cap
Sample SIP call with RFC 2833 DTMF 

67. DTMFsipinfo.pcap
Sample SIP call with SIP INFO DTMF 

68. h223-over-rtp.pcap.gz
A sample of H.223 running over RTP, following negotiation over SIP. 

69. h263-over-rtp.pcap 
A sample of RFC 2190 H.263 over RTP, following negotiation over SIP. 

70. metasploit-sip-invite-spoof.pcap
Metasploit 3.0 SIP Invite spoof capture. 

71. FAX-Call-t38-CA-TDM-SIP-FB-1.pcap
Fax call from TDM to SIP over Mediagateway with declined T38 request, megaco H.248. 

72. Asterisk_ZFONE_XLITE.pcap
Sample SIP call with ZRTP protected media. 

73. MagicJack+ short test call
A complete telephone call example 

74. h223-over-iax.pcap.gz
A sample of H.223 running over IAX, including H.263 and AMR payloads. 

75. h223-over-tcp.pcap.gz
A sample of H.223 running over TCP. You'll need to select 'Decode as... H.223'. 

76. WAP_WBXML_Provisioning_Push.pcap
Contains a WSP Push PDU with a Client Provisioning document encoded in WBXML. This example comes from the WAP Provisioning specifications.

77. wap_google.pcap
Contains two WSP request-response dialogs. 

78. lldp.minimal.pcap
Simple LLDP packets. 

79. lldp.detailed.pcap
LLDP packets with more details.

80. lldpmed_civicloc.pcap
LLDP-MED packet with TLV entries, including civic address location ID, network policy and extended power-via-MDI. 

81. PPPHandshake.cap
PPP Handshake using Microsoft Windows VPN - MS NetMon Format 

82. PPP-config.cap
LCP and IPCP configuration of a Direct Cable Connection (WinXP) 

83. ppp-dialup-munged.pppd
Linux pppd async dialup connect/disconnect; (The capture file generated by pppd has been munged slightly to hide login info, thus certain HDLC checksums are incorrect) 

84. ppp_lcp_ipcp.pcap
PPP LCP and IPCP traffic w/a protocol reject for CCP. 

85. Network_Join_Nokia_Mobile.pcap
802.11 capture of a new client joining the network, authenticating and activating WPA ciphering 

86.  wpa-Induction.pcap 
802.11 capture with WPA data encrypted using the password "Induction". 

87. Http.cap 
802.11n capture with PPI encapsulation containing HTTP data. 

88. mesh.pcap 
802.11s capture with Radiotap encapsulation. 

89. Teredo.pcap 
Example of IPv6 traffic using Teredo for encapsulation. 

90. 6to4.pcap 
Example of IPv6 traffic using 6to4 for encapsulation. 

91. 6in4.pcap.gz 
Example of IPv6 traffic using 6in4 for encapsulation. 

92. 6LoWPAN.pcap.gz 
IPv6 over IEEE 802.15.4. 

93. dhcp-nanosecond.pcap
DHCP with nanosecond timing. 

94. dhcp.pcapng
DHCP saved in pcapng format. 

95. dns_port.pcap
DNS running on a different port than 53. 

96. dns+icmp.pcapng.gz
DNS and ICMP saved in gzipped pcapng format. 

97. wpa-Induction.pcap.gz
WiFi 802.11 WPA traffic. 

