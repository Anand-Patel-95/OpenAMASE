// ===============================================================================
// Authors: AFRL/RQQD
// Organization: Air Force Research Laboratory, Aerospace Systems Directorate, Power and Control Division
// 
// Copyright (c) 2017 Government of the United State of America, as represented by
// the Secretary of the Air Force.  No copyright is claimed in the United States under
// Title 17, U.S. Code.  All Other Rights Reserved.
// ===============================================================================




package avtas.amase.setup;

/**
 * Used to inform other components of an object selection
 * @author AFRL/RQQD
 */
public class SelectObjectEvent {

    private final Object object;

    public SelectObjectEvent(Object obj) {
        this.object = obj;
    }

    public Object getObject() {
        return object;
    }
}

/* Distribution A. Approved for public release. 
 *  Case: #88ABW-2015-4601. Date: 24 Sep 2015. */