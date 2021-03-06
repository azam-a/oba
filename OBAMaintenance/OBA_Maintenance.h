#ifndef OBA_MAINT_H
#define OBA_MAINT_H

class OBA_Maintenance {
	public:
		OBA_Maintenance();

		static void maintenanceRoutine(int tick);
		static void maintenanceChecker();
		static void maintenanceMessageService(int tick);
		static void showMaintenanceMessage();
		static unsigned int getCurrentMileage();
		static void debugger(unsigned int overrideMileage);
		static void serviceDoneHandler();
};

typedef OBA_Maintenance		MAINT;

#endif