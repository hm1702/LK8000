/*
   LK8000 Tactical Flight Computer -  WWW.LK8000.IT
   Released under GNU/GPL License v.2 or later
   See CREDITS.TXT file for authors and copyrights

   $Id: devGPSNav.h,v 1.1 2011/12/21 10:35:29 root Exp root $
*/

#ifndef	DEVCAIGPSNAV_H
#define	DEVCAIGPSNAV_H

#include "devBase.h"
#include "Devices/DeviceRegister.h"

/**
 * @brief CAI GPS-Nav device class
 *
 * Class provides support for Cambridge GPS-Nav IGC certifed logger.
 */
class CDevCAIGpsNav : public DevBase
{
  // LK interface
  static constexpr 
  const TCHAR *GetName() {
    return _T("CAI GPS-NAV");
  }

  static BOOL Init(DeviceDescriptor_t *d);
  static BOOL DeclareTask(PDeviceDescriptor_t d, const Declaration_t *decl, unsigned errBufSize, TCHAR errBuf[]);
  static void Install(PDeviceDescriptor_t d);

public:

  static constexpr
  DeviceRegister_t Register() {
    return devRegister(GetName(), Install);
  }

};

#endif /* DEVCAIGPSNAV_H */
