
#include "epuck_foraging.h"

#include <argos3/core/utility/configuration/argos_configuration.h>

/****************************************/
/****************************************/

CEpuckForaging::CEpuckForaging() {}

void CEpuckForaging::Init(TConfigurationNode& t_node) {
    m_pcWheels = GetActuator<CCI_DifferentialSteeringActuator>("differential_steering");
    m_pcProximity = GetSensor<CCI_ProximitySensor>("proximity");
}

void CEpuckForaging::ControlStep() {}

REGISTER_CONTROLLER(CEpuckForaging, "epuck_foraging_controller")
