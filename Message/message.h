struct Message {
    uint8_t type;
    uint64_t send_t;       //nanos_since_epoch
    char payload[112];
};