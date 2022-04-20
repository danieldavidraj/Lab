//10.1.67.153
//orcl
//msc19pw09
//19pw

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/ServerInfo")
public class ServerInfo extends HttpServlet {
	private static final long serialVersionUID = 1L;

	public void service(HttpServletRequest req, HttpServletResponse res) throws ServletException, IOException {
		res.setContentType("text/plain");
		PrintWriter out = res.getWriter();
		
		out.println("req.getServerName(): " + req.getServerName());
		out.println("req.getServerPort(): " + req.getServerPort());
		out.println("getServletContext().getServerInfo(): " +
		getServletContext().getServerInfo());
		out.println("getServerInfo() name: " +
		getServerInfoName(getServletContext().getServerInfo()));
		out.println("getServerInfo() version: " +
		getServerInfoVersion(getServletContext().getServerInfo()));
		out.println("getServletContext().getAttribute(\"attribute\"): " + 
		getServletContext().getAttribute("attribute"));
	}

	private String getServerInfoName(String serverInfo) {
		int slash = serverInfo.indexOf('/');
		if (slash == -1) return serverInfo;
		else return serverInfo.substring(0, slash);
	}

	private String getServerInfoVersion(String serverInfo) {
		int slash = serverInfo.indexOf('/');
		if (slash == -1) return null;
		else return serverInfo.substring(slash + 1);
	}
}