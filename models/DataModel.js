function DataModel() {
    this.packetId;
    //this.time;
    //this.temperature;
    this.pressure;
    //this.acc_x;
    //this.acc_y;
    //this.acc_z;
    this.altitude;
    this.state;
    this.lat;
    this.long;
    this.hiz;

   this.create = function(packetId, /*time, temperature,*/ pressure, /*acc_x, acc_y, acc_z,*/ altitude, state, lat, long, hiz) {
        this.packetId = packetId;
        //this.time = time;
        //this.temperature = temperature;
        this.pressure = pressure;
        //this.acc_x = acc_x;
        //this.acc_y = acc_y;
        //this.acc_z = acc_z;
        this.altitude = altitude;
        this.state = state;
        this.lat = lat;
        this.long = long;
        this.hiz = hiz;
    }
}