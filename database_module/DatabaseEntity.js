function DatabaseEntity() {
    this.realTime;
    this.packetId;
    this.time;
    //this.temperature;
    this.pressure;
    this.altitude;
    this.state;
    this.lang;
    this.long;
    this.hiz;

   this.create = function(realTime, packetId, /*time, temperature,*/ pressure, altitude, state, lang, long, hiz) {
        this.realTime = realTime;
        this.packetId = packetId;
        t//his.time = time;
        //this.temperature = temperature;
        this.pressure = pressure;
        this.altitude = altitude;
        this.state = state;
        this.lang = lang;
        this.long = long;
        this.hiz = hiz;
    }
}