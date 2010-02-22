<?php
/**
 * Toly class
 *
 * This source file can be used to communicate with To.ly (http://to.ly)
 *
 * The class is documented in the file itself. If you find any bugs help me out and report them. Reporting can be done by sending an email to info[at]kiuz[dot]it
 * If you report a bug, make sure you give me enough information (include your code).
 *
 * License
 * Copyright (c) 2010, Domenico Monaco. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products derived from this software without specific prior written permission.
 *
 * This software is provided by the author "as is" and any express or implied warranties, including, but not limited to, the implied warranties of merchantability and fitness for a particular purpose are disclaimed. In no event shall the author be liable for any direct, indirect, incidental, special, exemplary, or consequential damages (including, but not limited to, procurement of substitute goods or services; loss of use, data, or profits; or business interruption) however caused and on any theory of liability, whether in contract, strict liability, or tort (including negligence or otherwise) arising in any way out of the use of this software, even if advised of the possibility of such damage.
 *
 * @author			Domenico Monaco <info@kiuz.it>
 * @version			1.0.0
 *
 * @copyright		Copyright (c) 2010, Domenico Monaco. All rights reserved.
 * @license			BSD License
 */
class Toly{

	// url for the toly-api
	const API_URL = 'http://to.ly/api.php';

// class methods
/**
  * Default constructor
  *
  * @return	void
  * @param	string $fucklogin not are used
  * @param	string $fuckapiKey not are used
  */
	public function __construct($fuklogin, $fukapiKey) {
    return true;
	}
// Shorten method
/**
  * Make call
  * @return shorted link
  * 
  * @param string $url are url that you want make short
  */
  public function shorten($url){
    $this->ch = curl_init();
    curl_setopt($this->ch, CURLOPT_URL, "http://to.ly/api.php?longurl=".urlencode($url));
    curl_setopt($this->ch, CURLOPT_RETURNTRANSFER,1);
    curl_setopt($this->ch, CURLOPT_HEADER, 0);
    $this->shorturl = curl_exec ($this->ch);
    curl_close ($this->ch);
    
    return $this->shorturl;
  }

}

?>
