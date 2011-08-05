package bring.out.ba;

import org.appcelerator.titanium.ITiAppInfo;
import org.appcelerator.titanium.TiApplication;
import org.appcelerator.titanium.TiProperties;
import org.appcelerator.titanium.util.Log;

/* GENERATED CODE
 * Warning - this class was generated from your application's tiapp.xml
 * Any changes you make here will be overwritten
 */
public final class Hello_world_android_titaniumAppInfo implements ITiAppInfo
{
	private static final String LCAT = "AppInfo";
	
	public Hello_world_android_titaniumAppInfo(TiApplication app) {
		TiProperties properties = app.getSystemProperties();
					
					properties.setString("ti.deploytype", "development");
	}
	
	public String getId() {
		return "bring.out.ba";
	}
	
	public String getName() {
		return "hello_world_android_titanium";
	}
	
	public String getVersion() {
		return "1.0";
	}
	
	public String getPublisher() {
		return "bringout";
	}
	
	public String getUrl() {
		return "http://";
	}
	
	public String getCopyright() {
		return "2011 by bringout";
	}
	
	public String getDescription() {
		return "not specified";
	}
	
	public String getIcon() {
		return "appicon.png";
	}
	
	public boolean isAnalyticsEnabled() {
		return true;
	}
	
	public String getGUID() {
		return "204cf8fe-4fae-4ef0-bec8-1e26fadc1d93";
	}
	
	public boolean isFullscreen() {
		return false;
	}
	
	public boolean isNavBarHidden() {
		return false;
	}
}
