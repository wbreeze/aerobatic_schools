<?php
/*
Convert post to get next page
This writes a page that forwards to another page
Cannot call after any output other than headers
*/
function getNextPage($nextURL)
{
   echo "<html><head>";
   echo "<META HTTP-EQUIV=Refresh CONTENT=\"0; URL=".$nextURL."\">";
   echo "</head><body><p>Redirecting to <a href=\"".$nextURL."\">".$nextURL."</a></p></html>";
}
/*
   Copyright 2008 International Aerobatic Club, Inc.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/
?>
