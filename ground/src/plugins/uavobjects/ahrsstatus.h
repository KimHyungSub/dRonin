/**
 ******************************************************************************
 *
 * @file       ahrsstatus.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: ahrsstatus.xml. 
 *             This is an automatically generated file.
 *             DO NOT modify manually.
 *
 * @brief      The UAVUObjects GCS plugin 
 *****************************************************************************/
/* 
 * This program is free software; you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation; either version 3 of the License, or 
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License 
 * for more details.
 * 
 * You should have received a copy of the GNU General Public License along 
 * with this program; if not, write to the Free Software Foundation, Inc., 
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */
#ifndef AHRSSTATUS_H
#define AHRSSTATUS_H

#include "uavdataobject.h"
#include "uavobjectmanager.h"

class UAVOBJECTS_EXPORT AhrsStatus: public UAVDataObject
{
    Q_OBJECT

public:
    // Field structure
    typedef struct {
        quint8 SerialNumber[25];
        quint8 CommErrors[4];
        quint8 HomeSet;
        quint8 CalibrationSet;

    } __attribute__((packed)) DataFields;

    // Field information
    // Field SerialNumber information
    /* Number of elements for field SerialNumber */
    static const quint32 SERIALNUMBER_NUMELEM = 25;
    // Field CommErrors information
    /* Array element names for field CommErrors */
    typedef enum { COMMERRORS_UPDATE=0, COMMERRORS_ATTITUDERAW=1, COMMERRORS_HOMELOCATION=2, COMMERRORS_CALIBRATION=3 } CommErrorsElem;
    /* Number of elements for field CommErrors */
    static const quint32 COMMERRORS_NUMELEM = 4;
    // Field HomeSet information
    /* Enumeration options for field HomeSet */
    typedef enum { HOMESET_FALSE=0, HOMESET_TRUE=1 } HomeSetOptions;
    // Field CalibrationSet information
    /* Enumeration options for field CalibrationSet */
    typedef enum { CALIBRATIONSET_FALSE=0, CALIBRATIONSET_TRUE=1 } CalibrationSetOptions;

  
    // Constants
    static const quint32 OBJID = 1048419880U;
    static const QString NAME;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    AhrsStatus();

    DataFields getData();
    void setData(const DataFields& data);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);

    static AhrsStatus* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);
	
private:
    DataFields data;

    void setDefaultFieldValues();

};

#endif // AHRSSTATUS_H
