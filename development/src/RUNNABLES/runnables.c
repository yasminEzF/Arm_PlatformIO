/*****************************************************************************/
/*                              Includes                                     */
/*****************************************************************************/
#include "RUNNABLES/runnables.h"
#include "SCHED/sched.h"

/*****************************************************************************/
/*                              Defines                                      */
/*****************************************************************************/

/*****************************************************************************/
/*                              Types                                        */
/*****************************************************************************/

/*****************************************************************************/
/*                           Global Variables                                */
/*****************************************************************************/
const runnable_t runnables[_runsNum] = {
    [run_sw] = {
        .name = "H_Switch",
        .period_mS = 5,
        .callBck = Hsw_runnable
    },
    [run_app] = {
        .name = "LED,SW App",
        .period_mS = 50,
        .callBck = app_runnable
    }
};

/*****************************************************************************/
/*                      Static Function Prototypes                           */
/*****************************************************************************/

/*****************************************************************************/
/*                           Implementation                                  */
/*****************************************************************************/

