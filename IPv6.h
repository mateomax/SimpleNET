class IPv6 {
unsigned Version :4 = 0110;
unsigned TrafficClass :8;
unsigned FlowLabel :20;
unsigned Lenght :16;
unsigned NextHeader :8
unsigned TTL :8;
unsigned SourceAddress :128;
unsigned DestinationAddress :128;
};
