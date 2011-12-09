#ifndef ACEventInfo_h
#define ACEventInfo_h
/**
 Class containing gerenal event data.

 @author Lars Perchalla & Philip Sauerland
 @date 2011
 */

#include "ACCommon.h"
#include "ACParticle.h"

class ACEventInfo : public ACCommon {
public:
    virtual std::string classname() const { return "ACEventInfo"; }
    ACEventInfo(int eventID, int lumiID, int runID, std::string type);
    ACEventInfo();
    virtual ~ACEventInfo() {};

    int eventID() const { return eventID_; }
    int lumiID() const { return lumiID_; }
    int runID() const { return runID_; }
    const std::string& type() const { return type_; }

    ClassDef(ACEventInfo,1);

protected:
    /// unique event id
    int eventID_;
    /// luminosity section
    int lumiID_;
    /// run number
    int runID_;
    /// event type like MC, data, etc.
    std::string type_;
};

typedef ACEventInfo* pACEventInfo;

#endif
