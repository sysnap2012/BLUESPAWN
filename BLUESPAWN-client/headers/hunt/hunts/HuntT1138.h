#pragma once
#include "../Hunt.h"
#include "hunt/reaction/Reaction.h"
#include "hunt/reaction/Log.h"

namespace Hunts {

	/**
	 * HuntT1138 examines the system for the presence of Application Shimming that can
	 * be used for persistence and privilege escalation.
	 * 
	 * @scans Cursory checks the values of the associated Application Shimming registry
	 * keys that can be abused.
	 * @scans Normal Scan not supported.
	 * @scans Intensive Scan not supported.
	 */
	class HuntT1138 : public Hunt {
	public:
		HuntT1138();

		virtual int ScanCursory(const Scope& scope, Reaction reaction);
		virtual std::vector<std::shared_ptr<Event>> GetMonitoringEvents() override;
	};
}